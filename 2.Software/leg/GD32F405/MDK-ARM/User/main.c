#include "gd32f4xx.h"
#include <stdio.h>

#include "I2C.h"

/*!
    \brief      main function
    \param[in]  none
    \param[out] none
    \retval     none
*/
int main(void)
{
    rcu_config();
    gpio_config();
    i2c_config();
		i2c_nvic_config();
}


