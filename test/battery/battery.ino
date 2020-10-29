#include <Arduino.h>
#include <stdint.h>
#include "Linduino.h"
#include "LT_I2C.h"
#include "UserInterface.h"
#include "QuikEval_EEPROM.h"
#include "LTC2943.h"
#include <Wire.h>
#include "U8glib.h"

// Function Declaration
               
void store_alert_settings();        // Store the alert settings to the EEPROM
int8_t restore_alert_settings();    // Read the alert settings from EEPROM
float temperature;

#define AUTOMATIC_MODE_DISPLAY_DELAY 500                  //!< The delay between readings in automatic mode
#define SCAN_MODE_DISPLAY_DELAY 10000                      //!< The delay between readings in scan mode

// Change resistor value to 50 mOhm (0.05) for DC1812AC (LTC2943-1)
const float resistor = .025;                               //!< resistor value on demo board

// Error string
const char ack_error[] = "Error: No Acknowledge. Check I2C Address."; //!< Error message

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);

// Global variables
static int8_t demo_board_connected;        //!< Set to 1 if the board is connected
static uint8_t alert_code = 0;     
void setup()
{
  quikeval_I2C_init();              //! Configure the EEPROM I2C port for 100kHz
  quikeval_I2C_connect();           //! Connects to main I2C port
  if ( u8g.getMode() == U8G_MODE_R3G3B2 )
  {
    u8g.setColorIndex(255);     // white
  }
  else if ( u8g.getMode() == U8G_MODE_GRAY2BIT )
  {
    u8g.setColorIndex(3);         // max intensity
  }
  else if ( u8g.getMode() == U8G_MODE_BW )
  {
    u8g.setColorIndex(1);         // pixel on
  }
  else if ( u8g.getMode() == U8G_MODE_HICOLOR )
  {
    u8g.setHiColorByRGB(255,255,255);
  }
  
  u8g.setFont(u8g_font_unifont);
  u8g.firstPage();  
  do
  {
    u8g.drawStr(0, 10, "LTC2943 monitor");
    u8g.drawStr(0, 24, "Measures voltage,");
    u8g.drawStr(0, 38, "current, charge");
    u8g.drawStr(0, 52, "and power.");
  } while( u8g.nextPage() );
  
  delay(3000);
  LTC2943_write(LTC2943_I2C_ADDRESS, LTC2943_ACCUM_CHARGE_MSB_REG, 0);
  LTC2943_write(LTC2943_I2C_ADDRESS, LTC2943_ACCUM_CHARGE_LSB_REG, 0);
}

void loop()
{
   int8_t ack = 0;                               //! I2C acknowledge indicator
  static uint8_t user_command;                  //! The user input command
  static uint8_t mAh_or_Coulombs = 0;
  static uint8_t celcius_or_kelvin = 0;
  static uint16_t prescalar_mode = LTC2943_PRESCALAR_M_4096;
  static uint16_t prescalarValue = 4096;
  static uint16_t alcc_mode = LTC2943_ALERT_MODE;
   ack |= menu_1_automatic_mode(mAh_or_Coulombs, celcius_or_kelvin, prescalar_mode, prescalarValue, alcc_mode);  //! Automatic Mode
}

//! Automatic Mode.
int8_t menu_1_automatic_mode(int8_t mAh_or_Coulombs, int8_t celcius_or_kelvin ,uint16_t prescalar_mode, uint16_t prescalarValue, uint16_t alcc_mode)
//! @return Returns the state of the acknowledge bit after the I2C address write. 0=acknowledge, 1=no acknowledge.
{
  int8_t LTC2943_mode;
  int8_t ack = 0;
  LTC2943_mode = LTC2943_AUTOMATIC_MODE|prescalar_mode|alcc_mode ;               //! Set the control register of the LTC2943 to automatic mode as well as set prescalar and AL#/CC# pin values.
  
  ack |= LTC2943_write(LTC2943_I2C_ADDRESS, LTC2943_CONTROL_REG, LTC2943_mode);   //! Writes the set mode to the LTC2943 control register

  do
  {


    uint8_t status_code, hightemp_code, lowtemp_code;
    uint16_t charge_code, current_code, voltage_code, temperature_code;

    ack |= LTC2943_read_16_bits(LTC2943_I2C_ADDRESS, LTC2943_ACCUM_CHARGE_MSB_REG, &charge_code);     //! Read MSB and LSB Accumulated Charge Registers for 16 bit charge code
    ack |= LTC2943_read_16_bits(LTC2943_I2C_ADDRESS, LTC2943_VOLTAGE_MSB_REG, &voltage_code);         //! Read MSB and LSB Voltage Registers for 16 bit voltage code
    ack |= LTC2943_read_16_bits(LTC2943_I2C_ADDRESS, LTC2943_CURRENT_MSB_REG, &current_code);         //! Read MSB and LSB Current Registers for 16 bit current code
    ack |= LTC2943_read_16_bits(LTC2943_I2C_ADDRESS, LTC2943_TEMPERATURE_MSB_REG, &temperature_code); //! Read MSB and LSB Temperature Registers for 16 bit temperature code
    ack |= LTC2943_read(LTC2943_I2C_ADDRESS, LTC2943_STATUS_REG, &status_code);                       //! Read Status Register for 8 bit status code


    float charge, current, voltage, temperature, power;
    if (mAh_or_Coulombs)
    {
      charge = LTC2943_code_to_coulombs(charge_code, resistor, prescalarValue); //! Convert charge code to Coulombs if Coulomb units are desired.

    }
    else
    {
      charge = LTC2943_code_to_mAh(charge_code, resistor, prescalarValue);      //! Convert charge code to mAh if mAh units are desired.

    }


    current = LTC2943_code_to_current(current_code, resistor);                //! Convert current code to Amperes
    voltage = LTC2943_code_to_voltage(voltage_code);                          //! Convert voltage code to Volts


    if (celcius_or_kelvin)
    {
      temperature = LTC2943_code_to_kelvin_temperature(temperature_code);   //! Convert temperature code to kelvin

    }
    else
    {
      temperature = LTC2943_code_to_celcius_temperature(temperature_code);  //! Convert temperature code to celcius

    }

   // checkAlerts(status_code);                                                   //! Check status code for Alerts. If an Alert has been set, print out appropriate message in the Serial Prompt.

    delay(AUTOMATIC_MODE_DISPLAY_DELAY);                                      //! Delay for 1s before next polling
  power = current * voltage;
  //voltage-V,current-A,charge-mAh,power-W
  // picture loop

  
  
  }
  while (Serial.available() == false && !(ack));                                 //! if Serial is not available and an NACK has not been recieved, keep polling the registers.
 
  return(ack);
 } 
