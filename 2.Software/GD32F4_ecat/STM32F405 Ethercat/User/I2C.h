#ifndef _I2C_H_
#define _I2C_H_

#include "stm32f4xx.h"

/* STM32 I2C ?? */
#define I2C_Speed              400000

/* STM32???I2C??,???????STM32???I2C????????? */
#define I2C_OWN_ADDRESS7      0X0A

/*I2C??*/
#define EEPROM_I2C                          I2C1
#define EEPROM_I2C_CLK                      RCC_APB1Periph_I2C1

#define EEPROM_I2C_SCL_PIN                  GPIO_Pin_8
#define EEPROM_I2C_SCL_GPIO_PORT            GPIOB
#define EEPROM_I2C_SCL_GPIO_CLK             RCC_AHB1Periph_GPIOB
#define EEPROM_I2C_SCL_SOURCE               GPIO_PinSource8
#define EEPROM_I2C_SCL_AF                   GPIO_AF_I2C1

#define EEPROM_I2C_SDA_PIN                  GPIO_Pin_9
#define EEPROM_I2C_SDA_GPIO_PORT            GPIOB
#define EEPROM_I2C_SDA_GPIO_CLK             RCC_AHB1Periph_GPIOB
#define EEPROM_I2C_SDA_SOURCE               GPIO_PinSource9
#define EEPROM_I2C_SDA_AF                   GPIO_AF_I2C1




#endif

