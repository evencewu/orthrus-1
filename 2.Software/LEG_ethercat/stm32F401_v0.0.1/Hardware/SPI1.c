//############################################################
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//版权所有，盗版必究
//EtherCAT从站学习板
//Author：廷华电子设计
//淘宝店铺: https://shop461235811.taobao.com/
//我的博客：https://blog.csdn.net/zhandouhu/article/category/9455918
//############################################################
/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "SPI1.h"
#include "ecat_def.h"
#include "el9800hw.h"
/*******************************************************************************
* Function Name  : SPI1_Init
* Description    : SPI1 initialize
* Input          : None
* Output         : None
* Return         : None
* Attention		 : None
*******************************************************************************/
void SPI1_Init(void) 
{ 
	
//  SPI_InitTypeDef  SPI_InitStructure;
//  RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI1, ENABLE);
//  /* DISABLE SPI1 */ 
//  SPI_Cmd(SPI1, DISABLE); 
//  /* SPI1 Config -------------------------------------------------------------*/ 
//  SPI_InitStructure.SPI_Direction = SPI_Direction_2Lines_FullDuplex; 
//  SPI_InitStructure.SPI_Mode = SPI_Mode_Master; 
//  SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b; 
//  SPI_InitStructure.SPI_CPOL = SPI_CPOL_High; //
//  SPI_InitStructure.SPI_CPHA = SPI_CPHA_2Edge; //
//  SPI_InitStructure.SPI_NSS = SPI_NSS_Soft; 
//  SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_4; 
//  SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB; 
//  SPI_InitStructure.SPI_CRCPolynomial = 7; 
//  SPI_Init(SPI1, &SPI_InitStructure); 
//  /* Enable SPI1 */ 
//  SPI_Cmd(SPI1, ENABLE); 
	
	SPI_InitTypeDef  SPI_InitStructure;

	  /* SPI configuration -------------------------------------------------------*/
  SPI_I2S_DeInit(SPIx);
  SPI_InitStructure.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
  SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b;
  SPI_InitStructure.SPI_CPOL = SPI_CPOL_High;
  SPI_InitStructure.SPI_CPHA = SPI_CPHA_2Edge;
  SPI_InitStructure.SPI_NSS = SPI_NSS_Soft;
  SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2;//168/4=42M  42/2=21M
  SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB;
  SPI_InitStructure.SPI_CRCPolynomial = 7;
	SPI_InitStructure.SPI_Mode = SPI_Mode_Master;
  SPI_Init(SPIx, &SPI_InitStructure);
  
  /* Enable the SPI peripheral */
  SPI_Cmd(SPIx, ENABLE);

                       
} 

/*******************************************************************************
* Function Name  : SPI1_GPIO_Init
* Description    : SPI1 Port initialize
* Input          : None
* Output         : None
* Return         : None
* Attention		 : None
*******************************************************************************/
void SPI1_GPIO_Init(void) 
{ 
//  GPIO_InitTypeDef GPIO_InitStructure;
//  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_AFIO, ENABLE);
//  /* Configure SPI1 pins: SCK, MISO and MOSI ---------------------------------*/ 
//  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5  | GPIO_Pin_6 | GPIO_Pin_7; 
//  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;       
//  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//  GPIO_Init(GPIOA, &GPIO_InitStructure); 
//  /* CS */
//  GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_4;
//  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;		 
//  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//  GPIO_Init(GPIOA, &GPIO_InitStructure);
//  /* IRQ */
//  GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_3 ;
//  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU ;
//  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//  GPIO_Init(GPIOA, &GPIO_InitStructure);
//  
//  SPI1_Init(); 
//	
	
	
	GPIO_InitTypeDef GPIO_InitStructure;

  /* Peripheral Clock Enable -------------------------------------------------*/
  /* Enable the SPI clock */
  SPIx_CLK_INIT(SPIx_CLK, ENABLE);
  
  /* Enable GPIO clocks */
  RCC_AHB1PeriphClockCmd(SPIx_SCK_GPIO_CLK | SPIx_MISO_GPIO_CLK | SPIx_MOSI_GPIO_CLK, ENABLE);

  /* SPI GPIO Configuration --------------------------------------------------*/
  /* GPIO Deinitialisation */
//  GPIO_DeInit(SPIx_SCK_GPIO_PORT);
//  GPIO_DeInit(SPIx_MISO_GPIO_PORT);
//  GPIO_DeInit(SPIx_MOSI_GPIO_PORT);
  
  /* Connect SPI pins to AF5 */  
  GPIO_PinAFConfig(SPIx_SCK_GPIO_PORT, SPIx_SCK_SOURCE, SPIx_SCK_AF);
  GPIO_PinAFConfig(SPIx_MISO_GPIO_PORT, SPIx_MISO_SOURCE, SPIx_MISO_AF);    
  GPIO_PinAFConfig(SPIx_MOSI_GPIO_PORT, SPIx_MOSI_SOURCE, SPIx_MOSI_AF);

  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_DOWN;

  /* SPI SCK pin configuration */
  GPIO_InitStructure.GPIO_Pin = SPIx_SCK_PIN;
  GPIO_Init(SPIx_SCK_GPIO_PORT, &GPIO_InitStructure);
  
  /* SPI  MISO pin configuration */
  GPIO_InitStructure.GPIO_Pin =  SPIx_MISO_PIN;
  GPIO_Init(SPIx_MISO_GPIO_PORT, &GPIO_InitStructure);  

  /* SPI  MOSI pin configuration */
  GPIO_InitStructure.GPIO_Pin =  SPIx_MOSI_PIN;
  GPIO_Init(SPIx_MOSI_GPIO_PORT, &GPIO_InitStructure);
 
 
  /* Enable GPIO clocks */
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
 
  /* CS */
  GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_8; 
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_UP;
  GPIO_Init(GPIOB, &GPIO_InitStructure);
	
//  /* IRQ */
//  GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_3; 
//  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
//  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//  GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_NOPULL;
//  GPIO_Init(GPIOE, &GPIO_InitStructure);
	
	SPI1_Init(); 
  
} 



/*******************************************************************************
* Function Name  : WR_CMD
* Description    : Read and Wire data to ET1100 
* Input          : - cmd: the data send to ET1100
* Output         : none
* Return         : temp: the data read from ET1100
* Attention		 : None
*******************************************************************************/
 uint8_t WR_CMD (uint8_t cmd)  
{ 
	 uint8_t temp; 

  /* Wait for SPI1 Tx buffer empty */ 
  while (SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_TXE) == RESET); 
  /* Send SPI1 data */ 
  SPI_I2S_SendData(SPI2,cmd); 
  /* Wait for SPI1 data reception */ 
  while (SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_RXNE) == RESET); 
  /* Read SPI1 received data */ 
	temp =  SPI_I2S_ReceiveData(SPI2); 
	return temp;
	
} 


/*********************************************************************************************************
      END FILE
*********************************************************************************************************/
