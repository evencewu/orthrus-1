//############################################################
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//版权所有，盗版必究
//EtherCAT从站学习板
//Author：廷华电子设计
//淘宝店铺: https://shop461235811.taobao.com/
//我的博客：https://blog.csdn.net/zhandouhu/article/category/9455918
//############################################################

#ifndef _TOUCHPANEL_H_
#define _TOUCHPANEL_H_

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"


  #define SPIx                           SPI2
  #define SPIx_CLK                       RCC_APB1Periph_SPI2
  #define SPIx_CLK_INIT                  RCC_APB1PeriphClockCmd

  #define SPIx_SCK_PIN                   GPIO_Pin_10
  #define SPIx_SCK_GPIO_PORT             GPIOB
  #define SPIx_SCK_GPIO_CLK              RCC_AHB1Periph_GPIOB
  #define SPIx_SCK_SOURCE                GPIO_PinSource10
  #define SPIx_SCK_AF                    GPIO_AF_SPI2

  #define SPIx_MISO_PIN                  GPIO_Pin_2
  #define SPIx_MISO_GPIO_PORT            GPIOC
  #define SPIx_MISO_GPIO_CLK             RCC_AHB1Periph_GPIOC
  #define SPIx_MISO_SOURCE               GPIO_PinSource2
  #define SPIx_MISO_AF                   GPIO_AF_SPI2

  #define SPIx_MOSI_PIN                  GPIO_Pin_3
  #define SPIx_MOSI_GPIO_PORT            GPIOC
  #define SPIx_MOSI_GPIO_CLK             RCC_AHB1Periph_GPIOC
  #define SPIx_MOSI_SOURCE               GPIO_PinSource3
  #define SPIx_MOSI_AF                   GPIO_AF_SPI2

	#define DESELECT_SPI GPIO_SetBits(GPIOB,GPIO_Pin_8) 
	#define SELECT_SPI GPIO_ResetBits(GPIOB,GPIO_Pin_8) 




/* Private function prototypes -----------------------------------------------*/				
void SPI1_GPIO_Init(void);	
uint8_t WR_CMD (uint8_t cmd)  ;
void ADC_GPIO_Configuration(void);
void ADC_Configuration(void);
void NVIC_Configuration(void);
void TIM_Configuration(uint8_t period)	;
void EXTI0_Configuration(void);
void EXTI1_Configuration(void);
void EXTI8_Configuration(void);
#endif

/*********************************************************************************************************
      END FILE
*********************************************************************************************************/


