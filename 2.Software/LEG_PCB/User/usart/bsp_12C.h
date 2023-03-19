#ifndef __I2C_H
#define	__I2C_H

#include "stm32f4xx.h"
#include <stdio.h>

/* STM32 I2C 快速模式 */
#define I2C_Speed 400000

/* 这个地址只要与STM32外挂的I2C器件地址不一样即可 */
#define I2C_OWN_ADDRESS7      0X0A   

/*I2C接口*/
#define EEPROM_I2C                          I2C1
#define EEPROM_I2C_CLK                      RCC_APB1Periph_I2C1
#define EEPROM_I2C_CLK_INIT								RCC_APB1PeriphClockCmd

#define EEPROM_I2C_SCL_PIN                  GPIO_Pin_6                
#define EEPROM_I2C_SCL_GPIO_PORT            GPIOB                       
#define EEPROM_I2C_SCL_GPIO_CLK             RCC_AHB1Periph_GPIOB
#define EEPROM_I2C_SCL_SOURCE               GPIO_PinSource6
#define EEPROM_I2C_SCL_AF                   GPIO_AF_I2C1

#define EEPROM_I2C_SDA_PIN                  GPIO_Pin_7                  
#define EEPROM_I2C_SDA_GPIO_PORT            GPIOB                       
#define EEPROM_I2C_SDA_GPIO_CLK             RCC_AHB1Periph_GPIOB
#define EEPROM_I2C_SDA_SOURCE               GPIO_PinSource7
#define EEPROM_I2C_SDA_AF                   GPIO_AF_I2C1

#define I2Cx_FLAG_TIMEOUT             ((uint32_t) 900) //0x1100
#define I2Cx_LONG_TIMEOUT             ((uint32_t) (300 * I2Cx_FLAG_TIMEOUT))

void I2C_GPIO_Config(void);
void I2C_Mode_Configu(void);
void I2C_EE_Init(void);

uint32_t I2C_EE_BufferRead(uint8_t* pBuffer, uint8_t ReadAddr, uint16_t NumByteToRead);
uint32_t I2C_EE_ByteWrite(uint8_t* pBuffer, uint8_t WriteAddr);

#endif /* __USART1_H */
