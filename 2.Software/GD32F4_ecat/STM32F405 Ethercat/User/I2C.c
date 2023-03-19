#include "stm32f4xx.h"
#include "I2C.h"
#include "ecat_def.h"
#include "el9800hw.h"

static void I2C_GPIO_Config(void)
{
    GPIO_InitTypeDef  GPIO_InitStructure;

    /*??I2C???? */
    RCC_APB1PeriphClockCmd(EEPROM_I2C_CLK, ENABLE);

    /*??I2C???GPIO??*/
    RCC_AHB1PeriphClockCmd(EEPROM_I2C_SCL_GPIO_CLK |
                        EEPROM_I2C_SDA_GPIO_CLK, ENABLE);

    /* ????? PXx ? I2C_SCL*/
    GPIO_PinAFConfig(EEPROM_I2C_SCL_GPIO_PORT, EEPROM_I2C_SCL_SOURCE,
                    EEPROM_I2C_SCL_AF);
    /* ????? PXx ? to I2C_SDA*/
    GPIO_PinAFConfig(EEPROM_I2C_SDA_GPIO_PORT, EEPROM_I2C_SDA_SOURCE,
                    EEPROM_I2C_SDA_AF);

    /*?? SCL?? */
    GPIO_InitStructure.GPIO_Pin = EEPROM_I2C_SCL_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_OType = GPIO_OType_OD;
    GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_NOPULL;
    GPIO_Init(EEPROM_I2C_SCL_GPIO_PORT, &GPIO_InitStructure);

    /*?? SDA?? */
    GPIO_InitStructure.GPIO_Pin = EEPROM_I2C_SDA_PIN;
    GPIO_Init(EEPROM_I2C_SDA_GPIO_PORT, &GPIO_InitStructure);
}

static void I2C_Mode_Config(void)
{
    I2C_InitTypeDef  I2C_InitStructure;

    /* I2C ?? */
    /*I2C??*/
    I2C_InitStructure.I2C_Mode = I2C_Mode_I2C;
    /*???*/
    I2C_InitStructure.I2C_DutyCycle = I2C_DutyCycle_2;
    /*I2C????*/
    I2C_InitStructure.I2C_OwnAddress1 =I2C_OWN_ADDRESS7;
    /*????*/
    I2C_InitStructure.I2C_Ack = I2C_Ack_Enable ;
    /* I2C????? */
I2C_InitStructure.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit;
    /* ???? */
    I2C_InitStructure.I2C_ClockSpeed = I2C_Speed;
    /*????*/
    I2C_Init(EEPROM_I2C, &I2C_InitStructure);
    /* ?? I2C */
    I2C_Cmd(EEPROM_I2C, ENABLE);
}

/**
* @brief  I2C ?????
* @param  ?
* @retval ?
*/
void I2C_EE_Init(void)
{
    I2C_GPIO_Config();

    I2C_Mode_Config();
}