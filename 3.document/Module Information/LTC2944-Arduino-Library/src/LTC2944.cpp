/*
	Arduino Library for LTC2944
*/

#include "LTC2944.h"

LTC2944::LTC2944(uint8_t rSense) {
	_rSense = rSense;
	_prescalerM = 0xFFFF;
	_batteryCapacity = 22000; // Default value when M = 4096
}

bool LTC2944::begin(TwoWire &wirePort) {
	// Wire.begin() should be called in the application code in advance
	_i2cPort = &wirePort;

	// Checks device ID
	uint8_t chipID = getStatus() >> A_CHIP_ID_OFFSET;
	if (chipID != CHIP_ID_LTC2944) {
		return false;
	}

	return true;
}

void LTC2944::startMeasurement() {
	uint8_t value = readByteFromRegister(REG_B_CONTROL);
	value &= SHUTDOWN_MASK;
	writeByteToRegister(REG_B_CONTROL, value);
}

void LTC2944::stopMeasurement() {
	uint8_t value = readByteFromRegister(REG_B_CONTROL);
	value |= 1;
	writeByteToRegister(REG_B_CONTROL, value);
}

uint8_t LTC2944::getStatus() {
	return readByteFromRegister(REG_A_STATUS);
}

uint8_t LTC2944::findExponentOfPowerOfTwo(uint16_t value) { //返回对应B[5:3]的值
	if (value > 1024) {
		return 6;
	}

	for (uint8_t i = 0; i < 6; i++) {
		if ((value >> (i * 2)) & 1) {
			return i;
		}
	}
}

uint16_t LTC2944::roundUpToPowerOfTwo(uint16_t value) { //获取大于等于value的最小的2的幂
	// Reference: https://graphics.stanford.edu/~seander/bithacks.html#RoundUpPowerOf2
	value--;
	value |= value >> 1;
	value |= value >> 2;
	value |= value >> 4;
	value |= value >> 8;
	value++;
	return value;
}

void LTC2944::setPrescalerM(uint16_t m) {
	if (m < 1 || m > 4096) {
		return;
	}

	// Updates instance variable to avoid unnecessary access to register
	_prescalerM = m;
	m = findExponentOfPowerOfTwo(m);

	uint8_t value = readByteFromRegister(REG_B_CONTROL);
	value &= PRESCALER_M_MASK;
	value |= (m << B_PRESCALER_M_OFFSET);
	writeByteToRegister(REG_B_CONTROL, value);
}

void LTC2944::getPrescalerM() {
	if (_prescalerM == 0xFFFF) {
		// Needs to obtain M from register B
		uint8_t value = readByteFromRegister(REG_B_CONTROL);
		value &= ~PRESCALER_M_MASK;
		_prescalerM = value >> B_PRESCALER_M_OFFSET;
		if (_prescalerM > 6) {
			_prescalerM = 6;
		}
		_prescalerM = 1 << (_prescalerM << 1);
	}
}

void LTC2944::setADCMode(uint8_t mode) {
	if (mode > 0b11) {
		return;
	}

	uint8_t value = readByteFromRegister(REG_B_CONTROL);
	value &= ADC_MODE_MASK;
	value |= (mode << B_ADC_MODE_OFFSET);
	writeByteToRegister(REG_B_CONTROL, value);
}

void LTC2944::configureALCC(uint8_t mode) {
	if (mode >= ALCC_MODE_NOT_ALLOWED) {
		return;
	}

	uint8_t value = readByteFromRegister(REG_B_CONTROL);
	value &= ALCC_CONFIG_MASK;
	value |= (mode << B_ALCC_CONFIG_OFFSET);
	writeByteToRegister(REG_B_CONTROL, value);
}

uint16_t LTC2944::getRawAccumulatedCharge() {
	return readWordFromRegisters(REG_C_ACC_CHG_MSB);
}

float LTC2944::getRemainingCapacity() { //？
	getPrescalerM();
	uint16_t acr = getRawAccumulatedCharge();
	float unitRange = 0.34 * ((float) 50 / _rSense) * ((float) _prescalerM / 4096);
	float chargeMAH = unitRange * (0xFFFF - acr);
	return _batteryCapacity - chargeMAH; // mAh
}

float LTC2944::getVoltage(bool oneShot) {
	if (oneShot) {
		setADCMode(ADC_MODE_MANUAL);
		delay(10);
	}
	uint16_t value = readWordFromRegisters(REG_I_VOLTAGE_MSB);
	return 70.8 * ((float) value / 0xFFFF); // V
}

float LTC2944::getTemperature(bool oneShot) {
	if (oneShot) {
		setADCMode(ADC_MODE_MANUAL);
		delay(10);
	}
	uint16_t value = readWordFromRegisters(REG_U_TEMP_MSB);
	return 510 * ((float) value / 0xFFFF) - 273.15; // Celsius
}

float LTC2944::getCurrent(bool oneShot) {
	if (oneShot) {
		setADCMode(ADC_MODE_MANUAL);
		delay(10);
	}
	uint16_t value = readWordFromRegisters(REG_O_CURRENT_MSB);
	return ((float) value / 0x7FFF - 1) * 64 / _rSense; // A
}

void LTC2944::setBatteryCapacity(uint16_t mAh) {
	_batteryCapacity = mAh;
	uint32_t m = 4096 * ((float) mAh / (0x10000 * 0.34)) * ((float) _rSense / 50);
	if (m > 4096) {
		m = 4096;
	}
	m = roundUpToPowerOfTwo((uint16_t) m);
	setPrescalerM(m);
}

void LTC2944::setBatteryToFull() {
	writeWordToRegisters(REG_C_ACC_CHG_MSB, 0xFFFF);
}

void LTC2944::setRawAccumulatedCharge(uint16_t charge) {
	writeWordToRegisters(REG_C_ACC_CHG_MSB, charge);
}

void LTC2944::setChargeThresholds(uint16_t high, uint16_t low) {
	writeWordToRegisters(REG_E_CHG_THR_H_MSB, high);
	writeWordToRegisters(REG_G_CHG_THR_L_MSB, low);
}

void LTC2944::setVoltageThresholds(float high, float low) {
	uint32_t _high = high * 0xFFFF / 70.8;
	uint32_t _low = low * 0xFFFF / 70.8;
	if(_high > 0xFFFF){
		_high = 0xFFFF;
	}else if(_high < 0){
		_high = 0;
	}
	if(_low > 0xFFFF){
		_low = 0xFFFF;
	}else if(_low < 0){
		_low = 0;
	}
	writeWordToRegisters(REG_K_VOLTAGE_THR_H_MSB, (uint16_t) _high);
	writeWordToRegisters(REG_M_VOLTAGE_THR_L_MSB, (uint16_t) _low);
}

void LTC2944::setTemperatureThresholds(float high, float low) {
	uint32_t _high = (high + 273.15) * 0xFFFF / 510;
	uint32_t _low = (low + 273.15) * 0xFFFF / 510;
	_high >>= 8;
	_low >>= 8;
	if(_high >= 0xFF){
		_high = 0xFE;
	}else if(_high < 0){
		_high = 0;
	}
	if(_low > 0xFF){
		_low = 0xFF;
	}else if(_low <= 0){
		_low = 1;
	}
	writeByteToRegister(REG_W_TEMP_THR_H, (uint8_t) _high);
	writeByteToRegister(REG_X_TEMP_THR_L, (uint8_t) _low);
}

void LTC2944::setCurrentThresholds(float high, float low) {
	uint32_t _high = (high * _rSense / 64 + 1 ) * 0x7FFF;
	uint32_t _low = (low * _rSense / 64 + 1 ) * 0x7FFF;
	if(_high > 0xFFFF){
		_high = 0xFFFF;
	}else if(_high < 0){
		_high = 0;
	}
	if(_low > 0xFFFF){
		_low = 0xFFFF;
	}else if(_low < 0){
		_low = 0;
	}
	writeWordToRegisters(REG_Q_CURRENT_THR_H_MSB, (uint16_t) _high);
	writeWordToRegisters(REG_S_CURRENT_THR_L_MSB, (uint16_t) _low);
}

//---

uint16_t LTC2944::readWordFromRegisters(uint8_t msbAddress) {
	uint16_t value = 0;
	uint8_t msb = 0;
	uint8_t lsb = 0;

	_i2cPort->beginTransmission(LTC2944_ADDRESS);
	_i2cPort->write(msbAddress);
	_i2cPort->endTransmission(false);

	_i2cPort->requestFrom(LTC2944_ADDRESS, 2);
	msb = _i2cPort->read();
	lsb = _i2cPort->read();
	_i2cPort->endTransmission();
	value = (msb << 8) | lsb;

	return value;
}

bool LTC2944::writeWordToRegisters(uint8_t msbAddress, uint16_t value) {
	_i2cPort->beginTransmission(LTC2944_ADDRESS);
	_i2cPort->write(msbAddress);
	_i2cPort->write((uint8_t) (value >> 8));
	_i2cPort->write((uint8_t) value);
	return (_i2cPort->endTransmission() == 0);
}

uint8_t LTC2944::readByteFromRegister(uint8_t address) {
	uint8_t value = 0;

	_i2cPort->beginTransmission(LTC2944_ADDRESS);
	_i2cPort->write(address);
	_i2cPort->endTransmission(false);

	_i2cPort->requestFrom(LTC2944_ADDRESS, 1);
	value = _i2cPort->read();
	_i2cPort->endTransmission();

	return value;
}

bool LTC2944::writeByteToRegister(uint8_t address, uint8_t value) {
	_i2cPort->beginTransmission(LTC2944_ADDRESS);
	_i2cPort->write(address);
	_i2cPort->write(value);
	return (_i2cPort->endTransmission() == 0);
}
