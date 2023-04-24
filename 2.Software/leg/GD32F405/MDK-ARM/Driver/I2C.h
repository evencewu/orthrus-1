#ifndef _I2C_H_
#define _I2C_H_

#include "gd32f4xx.h"

#define I2C0_SLAVE_ADDRESS7    0x82
#define I2C1_SLAVE_ADDRESS7    0x72

void rcu_config(void);
void gpio_config(void);
void i2c_config(void);
void i2c_nvic_config(void);

#endif
