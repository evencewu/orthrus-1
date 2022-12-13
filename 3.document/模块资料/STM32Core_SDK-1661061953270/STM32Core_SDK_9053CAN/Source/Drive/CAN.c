#include <stdio.h>
#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_usart.h"
#include "stm32f10x_can.h"
#include "stm32f10x_rcc.h"
#include "misc.h"
#include "wit_c_sdk.h"
#include "CAN.h"

void CAN_Mode_Init(uint32_t uiBaud)
{ 
	GPIO_InitTypeDef 		GPIO_InitStructure; 
	CAN_InitTypeDef        	CAN_InitStructure;
	
	CAN_FilterInitTypeDef  	CAN_FilterInitStructure;
	NVIC_InitTypeDef  		NVIC_InitStructure;
	uint32_t tbs1, tbs2, tsjw, brp;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN1, ENABLE);	

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	
	GPIO_Init(GPIOA, &GPIO_InitStructure);			

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;	
	GPIO_Init(GPIOA, &GPIO_InitStructure);			

	CAN_InitStructure.CAN_TTCM=DISABLE;			
	CAN_InitStructure.CAN_ABOM=DISABLE;			
	CAN_InitStructure.CAN_AWUM=DISABLE;			
	CAN_InitStructure.CAN_NART=ENABLE;			
	CAN_InitStructure.CAN_RFLM=DISABLE;		 	 
	CAN_InitStructure.CAN_TXFP=DISABLE;			
	CAN_InitStructure.CAN_Mode= CAN_Mode_Normal;	   

	
    switch(uiBaud)
    {
        default:
			uiBaud = 1000000;
        case 1000000:
		case 800000:
        case 500000:
        case 400000:
        case 250000:
		case 200000:
        case 125000:
        case 100000:
        case 80000:
        case 50000:
        case 40000:
        case 20000:
        case 10000:
        case 5000:
		case 3000:
            tsjw = CAN_SJW_1tq;
            tbs1 = CAN_BS1_9tq;
            tbs2 = CAN_BS2_8tq;
            brp = 2000000 / uiBaud;
            break;
    }
	
	CAN_InitStructure.CAN_SJW=tsjw;			
	CAN_InitStructure.CAN_BS1=tbs1; 			
	CAN_InitStructure.CAN_BS2=tbs2;				
	CAN_InitStructure.CAN_Prescaler=brp;        
	CAN_Init(CAN1, &CAN_InitStructure);        	

	CAN_FilterInitStructure.CAN_FilterNumber=0;	
	CAN_FilterInitStructure.CAN_FilterMode=CAN_FilterMode_IdMask; 	
	CAN_FilterInitStructure.CAN_FilterScale=CAN_FilterScale_32bit; 
	CAN_FilterInitStructure.CAN_FilterIdHigh=0x0000;	
	CAN_FilterInitStructure.CAN_FilterIdLow=0x0000;
	CAN_FilterInitStructure.CAN_FilterMaskIdHigh=0x0000;
	CAN_FilterInitStructure.CAN_FilterMaskIdLow=0x0000;
	CAN_FilterInitStructure.CAN_FilterFIFOAssignment=CAN_Filter_FIFO0;
	CAN_FilterInitStructure.CAN_FilterActivation=ENABLE;

	CAN_FilterInit(&CAN_FilterInitStructure);			
	
	CAN_ITConfig(CAN1,CAN_IT_FMP0,ENABLE);				    

	NVIC_InitStructure.NVIC_IRQChannel = USB_LP_CAN1_RX0_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;    
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;          
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);
}  


void USB_LP_CAN1_RX0_IRQHandler(void)
{
  	CanRxMsg RxMessage;
    CAN_Receive(CAN1, 0, &RxMessage);
	WitCanDataIn(RxMessage.Data, RxMessage.DLC); 
}
void Can_Send_Msg(uint8_t ucStdId, uint8_t* msg, uint32_t len)
{
	uint8_t mbox;
	uint16_t i=0;
	CanTxMsg TxMessage;
	TxMessage.StdId=ucStdId;			
	TxMessage.ExtId=0;			
	TxMessage.IDE=CAN_Id_Standard; 
	TxMessage.RTR=CAN_RTR_Data;		
	TxMessage.DLC=len;			
	for(i=0;i<len;i++)
	TxMessage.Data[i]=msg[i];			          
	mbox= CAN_Transmit(CAN1, &TxMessage);   
	i=0; 
	while((CAN_TransmitStatus(CAN1, mbox)==CAN_TxStatus_Failed)&&(i<0XFFF))i++;
}

