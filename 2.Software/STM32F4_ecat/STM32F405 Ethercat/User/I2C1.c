#include "stm32f4xx.h"
#include "I2C1.h"
#include "ecat_def.h"
#include "el9800hw.h"

void I2C1_Init(void) 
{
	/*
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
	USART_InitTypeDef USART_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB1Periph_USART2,ENABLE);
	
	USART_InitStructure.USART_BaudRate=115200;
	USART_InitStructure.USART_HardwareFlowControl=USART_HardwareFlowControl_None;
	USART_InitStructure.USART_Mode=USART_Mode_Tx|USART_Mode_Rx; 
	USART_InitStructure.USART_Parity=USART_Parity_No;    
	USART_InitStructure.USART_StopBits=USART_StopBits_1; 
	USART_InitStructure.USART_WordLength=USART_WordLength_8b; 
	*/
}

void I2C1_GPIO_Init(void)
{
	/*
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_2 |GPIO_Pin_3;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_AF;         
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;    
	GPIO_InitStructure.GPIO_OType=GPIO_OType_PP;	  
	GPIO_InitStructure.GPIO_PuPd=GPIO_PuPd_UP;		
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	
	USART1_Init(); 
	*/
}
