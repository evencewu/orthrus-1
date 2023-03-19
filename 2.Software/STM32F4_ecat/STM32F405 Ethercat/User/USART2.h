#ifndef _USART_H_
#define _USART_H_

#include "stm32f4xx.h"
#include <stdio.h>


/*******************************************************/
#define RS232_USART                             USART2
#define RS232_USART_CLK                         RCC_APB1Periph_USART2

#define RS232_USART_RX_GPIO_PORT                GPIOA
#define RS232_USART_RX_GPIO_CLK                 RCC_AHB1Periph_GPIOA
#define RS232_USART_RX_PIN                      GPIO_Pin_3
#define RS232_USART_RX_AF                       GPIO_AF_USART2
#define RS232_USART_RX_SOURCE                   GPIO_PinSource3

#define RS232_USART_TX_GPIO_PORT                GPIOA
#define RS232_USART_TX_GPIO_CLK                 RCC_AHB1Periph_GPIOA
#define RS232_USART_TX_PIN                      GPIO_Pin_2
#define RS232_USART_TX_AF                       GPIO_AF_USART2
#define RS232_USART_TX_SOURCE                   GPIO_PinSource2


#define RS232_USART_IRQHandler                   USART2_IRQHandler
#define RS232_USART_IRQ                 					USART2_IRQn
/************************************************************/

//´®¿Ú²¨ÌØÂÊ
#define RS232_USART_BAUDRATE                    115200

void USART_Config(void);
	
void Usart_SendStr_length( USART_TypeDef * pUSARTx, uint8_t *str,uint32_t strlen );
void Usart_SendString( USART_TypeDef * pUSARTx, uint8_t *str);
void Usart_SendByte(USART_TypeDef *pUSARTx, uint8_t ch);

void Usart_update(void);

void mag_save(void);



#endif

