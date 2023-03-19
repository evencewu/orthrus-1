#include "stm32f4xx.h"
#include "USART2.h"
#include "ecat_def.h"
#include "el9800hw.h"

int16_t acc_x;
int16_t acc_y;
int16_t acc_z;

int16_t gyro_x;
int16_t gyro_y;
int16_t gyro_z;

int16_t mag_x;
int16_t mag_y;
int16_t mag_z;

void USART_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
  USART_InitTypeDef USART_InitStructure;
		
  RCC_AHB1PeriphClockCmd( RS232_USART_RX_GPIO_CLK|RS232_USART_TX_GPIO_CLK, ENABLE);

  /* 使能 UART 时钟 */
  RCC_APB1PeriphClockCmd(RS232_USART_CLK, ENABLE);
  
  /* 连接 PXx 到 USARTx_Tx*/
  GPIO_PinAFConfig(RS232_USART_RX_GPIO_PORT,RS232_USART_RX_SOURCE, RS232_USART_RX_AF);

  /*  连接 PXx 到 USARTx__Rx*/
  GPIO_PinAFConfig(RS232_USART_TX_GPIO_PORT,RS232_USART_TX_SOURCE,RS232_USART_TX_AF);

  /* 配置Tx引脚为复用功能  */
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;

  GPIO_InitStructure.GPIO_Pin = RS232_USART_TX_PIN  ;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(RS232_USART_TX_GPIO_PORT, &GPIO_InitStructure);

  /* 配置Rx引脚为复用功能 */
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
  GPIO_InitStructure.GPIO_Pin = RS232_USART_RX_PIN;
  GPIO_Init(RS232_USART_RX_GPIO_PORT, &GPIO_InitStructure);
			
  /* 配置串口RS232_USART 模式 */
  USART_InitStructure.USART_BaudRate = RS232_USART_BAUDRATE;
  USART_InitStructure.USART_WordLength = USART_WordLength_8b;
  USART_InitStructure.USART_StopBits = USART_StopBits_1;
  USART_InitStructure.USART_Parity = USART_Parity_No ;
  USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
  USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;
  USART_Init(RS232_USART, &USART_InitStructure); 
	
	NVIC_InitTypeDef NVIC_InitStructure;
  
  /* Configure one bit for preemption priority */
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
  
  /* 配置中断源 */
  NVIC_InitStructure.NVIC_IRQChannel = RS232_USART_IRQ;
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  NVIC_Init(&NVIC_InitStructure);
	
	/*配置串口接收中断*/
	USART_ITConfig(RS232_USART, USART_IT_RXNE, ENABLE);
	
  USART_Cmd(RS232_USART, ENABLE);
}

int step = 0;
u8 Res[11];
u16 sumcrc = 0;

uint8_t Rxflag=0;
uint8_t ucTemp;

void Usart_update(void)
{
	/*
	if(ucTemp < 10){
		ucTemp++; 
	}
	else if(ucTemp >= 10)
	{
		ucTemp = 0;
	}
	*/
	
	//if (USART_GetITStatus(DEBUG_USART,USART_IT_RXNE)!=RESET) 
	//{
	//	ucTemp = USART_ReceiveData( DEBUG_USART );
	//}
	
}
/*



void DEBUG_USART_IRQHandler(void)
{
	
	if(ucTemp < 10){
		ucTemp++; 
	}
	else if(ucTemp == 10)
	{
		ucTemp = 0;
	}
	
	if (USART_GetITStatus(DEBUG_USART,USART_IT_RXNE)!=RESET) 
	{
		//ucTemp = USART_ReceiveData( DEBUG_USART );
		                                          
		
		Res[step] =USART_ReceiveData(USART2);
		if(step == 0){
			if(!Res[step]^0x55)
			{
				step++;
			}
		}
		else if(step == 10)
		{
			switch(Res[1])
			{
				case 0x54: mag_save(); break;
			}
			step = 0;
		}
		else
		{
			step++;
		}
		
  }
	
}
*/

void mag_save(void)
{
	sumcrc = 0;
	for(int i = 0;i<10;i++)
	{
		sumcrc += (u16)Res[i];
	}
	if(!( ((u8)sumcrc&0xff) ^ Res[10]))
	{
		mag_x = (int16_t)((int16_t)Res[3]<<8|Res[2]);
	  mag_y = (int16_t)((int16_t)Res[5]<<8|Res[4]);
	  mag_z = (int16_t)((int16_t)Res[7]<<8|Res[6]);
	}
}

/*****************  发送一个字符 **********************/
static void Usart_SendByte( USART_TypeDef * pUSARTx, uint8_t ch )
{
	/* 发送一个字节数据到USART1 */
	USART_SendData(pUSARTx,ch);
		
	/* 等待发送完毕 */
	while (USART_GetFlagStatus(pUSARTx, USART_FLAG_TXE) == RESET);	
}
/*****************  指定长度的发送字符串 **********************/
void Usart_SendStr_length( USART_TypeDef * pUSARTx, uint8_t *str,uint32_t strlen )
{
	unsigned int k=0;
    do 
    {
        Usart_SendByte( pUSARTx, *(str + k) );
        k++;
    } while(k < strlen);
}
/*****************  发送字符串 **********************/
void Usart_SendString( USART_TypeDef * pUSARTx, uint8_t *str)
{
	unsigned int k=0;
    do 
    {
        Usart_SendByte( pUSARTx, *(str + k) );
        k++;
    } while(*(str + k)!='\0');
}


