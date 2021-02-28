/*
	Arduino Library for LTC2944
*/

#ifndef LTC2944_H
#define LTC2944_H

#include "Arduino.h"
#include "Wire.h"

#define LTC2944_ADDRESS			0x64

/* Register Map */

#define REG_A_STATUS			0x00 // Status (R)
#define REG_B_CONTROL			0x01 // Control (R/W)
#define REG_C_ACC_CHG_MSB		0x02 // Accumulated Charge MSB (R/W)
#define REG_D_ACC_CHG_LSB		0x03 // Accumulated Charge LSB (R/W)
#define REG_E_CHG_THR_H_MSB		0x04 // Charge Threshold High MSB (R/W)
#define REG_F_CHG_THR_H_LSB		0x05 // Charge Threshold High LSB (R/W)
#define REG_G_CHG_THR_L_MSB		0x06 // Charge Threshold Low MSB (R/W)
#define REG_H_CHG_THR_L_LSB		0x07 // Charge Threshold Low LSB (R/W)
#define REG_I_VOLTAGE_MSB		0x08 // Voltage MSB (R)
#define REG_J_VOLTAGE_LSB		0x09 // Voltage LSB (R)
#define REG_K_VOLTAGE_THR_H_MSB	0x0A // Voltage Threshold High MSB (R/W)
#define REG_L_VOLTAGE_THR_H_LSB	0x0B // Voltage Threshold High LSB (R/W)
#define REG_M_VOLTAGE_THR_L_MSB	0x0C // Voltage Threshold Low MSB (R/W)
#define REG_N_VOLTAGE_THR_L_LSB	0x0D // Voltage Threshold Low LSB (R/W)
#define REG_O_CURRENT_MSB		0x0E // Current MSB (R)
#define REG_P_CURRENT_LSB		0x0F // Current LSB (R)
#define REG_Q_CURRENT_THR_H_MSB	0x10 // Current Threshold High MSB (R/W)
#define REG_R_CURRENT_THR_H_LSB	0x11 // Current Threshold High LSB (R/W)
#define REG_S_CURRENT_THR_L_MSB	0x12 // Current Threshold Low MSB (R/W)
#define REG_T_CURRENT_THR_L_LSB	0x13 // Current Threshold Low LSB (R/W)
#define REG_U_TEMP_MSB			0x14 // Temperature MSB (R)
#define REG_V_TEMP_LSB			0x15 // Temperature LSB (R)
#define REG_W_TEMP_THR_H		0x16 // Temperature Threshold High (R/W)
#define REG_X_TEMP_THR_L		0x17 // Temperature Threshold Low (R/W)

/* Status Register (A) */

#define A_CHIP_ID_OFFSET		7 // Default 0
#define CHIP_ID_LTC2944			0
#define CHIP_ID_LTC2943			1
// Bits below are cleared after register is read
#define A_CURRENT_ALERT_OFFSET	6 // Default 0
#define A_ACC_CHG_OF_UF_OFFSET	5 // Default 0
#define A_TEMP_ALERT_OFFSET		4 // Default 0
#define A_CHG_ALERT_H_OFFSET	3 // Default 0
#define A_CHG_ALERT_L_OFFSET	2 // Default 0
#define A_VOLTAGE_ALERT_OFFSET	1 // Default 0
#define A_UV_LOCK_ALERT_OFFSET	0

/* Control Register (B) */

#define B_ADC_MODE_OFFSET		6 // Default [00]
#define ADC_MODE_MASK			0b00111111
#define ADC_MODE_AUTO			0b11
#define ADC_MODE_SCAN			0b10
#define ADC_MODE_MANUAL			0b01
#define ADC_MODE_SLEEP			0b00

#define B_PRESCALER_M_OFFSET	3 // Default [111], M = 2^(4 * B[5] + 2 * B[4] + B[3])
#define PRESCALER_M_MASK		0b11000111

#define B_ALCC_CONFIG_OFFSET	1 // Default [10]
#define ALCC_CONFIG_MASK		0b11111001
#define ALCC_MODE_ALERT			0b10
#define ALCC_MODE_CHG_COMPLETE	0b01
#define ALCC_MODE_DISABLED		0b00
#define ALCC_MODE_NOT_ALLOWED	0b11

#define SHUTDOWN_MASK			0b11111110

class LTC2944 {
	public:
		LTC2944(uint8_t rSense = 50);
		bool begin(TwoWire &wirePort = Wire);
		void startMeasurement();
		void stopMeasurement();
		uint8_t getStatus();
		uint8_t findExponentOfPowerOfTwo(uint16_t value);
		uint16_t roundUpToPowerOfTwo(uint16_t value);
		void setPrescalerM(uint16_t m);
		void getPrescalerM();
		void setADCMode(uint8_t mode);
		void configureALCC(uint8_t mode);
		uint16_t getRawAccumulatedCharge();
		float getRemainingCapacity();
		float getVoltage(bool oneShot = true);
		float getTemperature(bool oneShot = true);
		float getCurrent(bool oneShot = true);
		void setBatteryCapacity(uint16_t mAh);
		void setBatteryToFull();
		void setRawAccumulatedCharge(uint16_t charge);
		void setChargeThresholds(uint16_t high, uint16_t low);
		void setVoltageThresholds(float high, float low);
		void setTemperatureThresholds(float high, float low);
		void setCurrentThresholds(float high, float low);
		//---
		uint16_t readWordFromRegisters(uint8_t msbAddress);
		bool writeWordToRegisters(uint8_t msbAddress, uint16_t value);
		uint8_t readByteFromRegister(uint8_t address);
		bool writeByteToRegister(uint8_t address, uint8_t value);
	private:
		uint8_t _rSense;
		uint16_t _prescalerM;
		uint16_t _batteryCapacity;
		TwoWire *_i2cPort;
};

#endif
