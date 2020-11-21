#include <Arduino.h>
#include <stdint.h>
#include "Linduino.h"
#include "LT_I2C.h"
#include "UserInterface.h"
#include "QuikEval_EEPROM.h"
#include "LTC2943.h"
#include <Wire.h>
#include "U8glib.h"

// 函数声明

void store_alert_settings();        // 将警报设置存储到 EEPROM
int8_t restore_alert_settings();    // 从 EEPROM 读取警报设置

float temperature;

#define AUTOMATIC_MODE_DISPLAY_DELAY 500                  //!< 自动模式下读数之间的延迟
#define SCAN_MODE_DISPLAY_DELAY 10000                      //!< 扫描模式下读数之间的延迟

// 对于 DC1812AC （LTC2943-1） 将电阻值更改为 50 mOhm （0.05）
const float resistor = .025;                               //!< 演示板上的电阻值

// 错误字符串
const char ack_error[] = "Error: No Acknowledge. Check I2C Address."; //!< 错误消息

// 全局变量
static int8_t demo_board_connected;        //!< 如果主板已连接，设置为 1
static uint8_t alert_code = 0;     

void setup()
{
  quikeval_I2C_init();              //! 配置 100kHz 的 EEPROM I2C 端口
  quikeval_I2C_connect();           //! 连接到主 I2C 端口

  delay(3000);
  LTC2943_write(LTC2943_I2C_ADDRESS, LTC2943_ACCUM_CHARGE_MSB_REG, 0);
  LTC2943_write(LTC2943_I2C_ADDRESS, LTC2943_ACCUM_CHARGE_LSB_REG, 0);
}

void loop()
{
  int8_t ack = 0;                               //! I2C 确认指示器
  static uint8_t user_command;                  //! 用户输入命令
  static uint8_t mAh_or_Coulombs = 0;
  static uint8_t celcius_or_kelvin = 0;
  static uint16_t prescalar_mode = LTC2943_PRESCALAR_M_4096;
  static uint16_t prescalarValue = 4096;
  static uint16_t alcc_mode = LTC2943_ALERT_MODE;
   ack |= menu_1_automatic_mode(mAh_or_Coulombs, celcius_or_kelvin, prescalar_mode, prescalarValue, alcc_mode);  //! 自动模式
}

//! 自动模式
int8_t menu_1_automatic_mode(int8_t mAh_or_Coulombs, int8_t celcius_or_kelvin ,uint16_t prescalar_mode, uint16_t prescalarValue, uint16_t alcc_mode)
//! 返回 I2C 地址写入后确认位的状态。0=确认，1=不确认。
{
  int8_t LTC2943_mode;
  int8_t ack = 0;
  LTC2943_mode = LTC2943_AUTOMATIC_MODE|prescalar_mode|alcc_mode ;               //! 将 LTC2943 的控制寄存器设置为自动模式，并设置prescalar和 AL/CC 引脚值
  
  ack |= LTC2943_write(LTC2943_I2C_ADDRESS, LTC2943_CONTROL_REG, LTC2943_mode);   //! 将设置模式写入 LTC2943 控制寄存器

  do
  {


    uint8_t status_code, hightemp_code, lowtemp_code;
    uint16_t charge_code, current_code, voltage_code, temperature_code;

    ack |= LTC2943_read_16_bits(LTC2943_I2C_ADDRESS, LTC2943_ACCUM_CHARGE_MSB_REG, &charge_code);     //! 阅读 MSB 和 LSB 累积费用寄存器，了解 16 位充电代码
    ack |= LTC2943_read_16_bits(LTC2943_I2C_ADDRESS, LTC2943_VOLTAGE_MSB_REG, &voltage_code);         //! 读取 MSB 和 LSB 电压寄存器，了解 16 位电压代码
    ack |= LTC2943_read_16_bits(LTC2943_I2C_ADDRESS, LTC2943_CURRENT_MSB_REG, &current_code);         //! 读取 16 位当前代码的 MSB 和 LSB 当前寄存器
    ack |= LTC2943_read_16_bits(LTC2943_I2C_ADDRESS, LTC2943_TEMPERATURE_MSB_REG, &temperature_code); //! 阅读 MSB 和 LSB 温度寄存器，了解 16 位温度代码
    ack |= LTC2943_read(LTC2943_I2C_ADDRESS, LTC2943_STATUS_REG, &status_code);                       //! 读取状态寄存器以了解 8 位状态代码


    float charge, current, voltage, temperature, power;
    if (mAh_or_Coulombs)
    {
      charge = LTC2943_code_to_coulombs(charge_code, resistor, prescalarValue); //! 如果需要库仑单位，将充电代码转换为库仑。
    }
    else
    {
      charge = LTC2943_code_to_mAh(charge_code, resistor, prescalarValue);      //! 如果需要 mAh 单位，将充电代码转换为 mAh。
    }


    current = LTC2943_code_to_current(current_code, resistor);                //! 将当前代码转换为安培
    voltage = LTC2943_code_to_voltage(voltage_code);                          //! 将电压代码转换为伏特

    if (celcius_or_kelvin)
    {
      temperature = LTC2943_code_to_kelvin_temperature(temperature_code);   //! 将温度代码转换为开尔文
    }
    else
    {
      temperature = LTC2943_code_to_celcius_temperature(temperature_code);  //! 将温度代码转换为摄氏度
    }

   // checkAlerts(status_code);                                                   //! 检查状态代码以显示警报。如果已设置警报，请打印出串行提示中相应的消息。
    delay(AUTOMATIC_MODE_DISPLAY_DELAY);                                      //! 下次轮询前 1 的延迟

  power = current * voltage;
  //voltage-V,current-A,charge-mAh,power-W
  // picture loop
  }
  while (Serial.available() == false && !(ack));                                 //! if Serial is not available and an NACK has not been recieved, keep polling the registers.

  return(ack);
} 
