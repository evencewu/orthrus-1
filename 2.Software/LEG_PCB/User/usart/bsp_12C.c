#include "./usart/bsp_12C.h"

static __IO uint32_t  I2CTimeout = I2Cx_LONG_TIMEOUT;

uint16_t EEPROM_ADDRESS = 0x36;

void I2C_GPIO_Config(void)
{

  GPIO_InitTypeDef  GPIO_InitStructure; 
   
  /*!< EEPROM_I2C Periph clock enable */
  EEPROM_I2C_CLK_INIT(EEPROM_I2C_CLK, ENABLE);
  
  /*!< EEPROM_I2C_SCL_GPIO_CLK and EEPROM_I2C_SDA_GPIO_CLK Periph clock enable */
  RCC_AHB1PeriphClockCmd(EEPROM_I2C_SCL_GPIO_CLK | EEPROM_I2C_SDA_GPIO_CLK, ENABLE);

  /*!< GPIO configuration */
  /* Connect PXx to I2C_SCL*/
  GPIO_PinAFConfig(EEPROM_I2C_SCL_GPIO_PORT, EEPROM_I2C_SCL_SOURCE, EEPROM_I2C_SCL_AF);
  /* Connect PXx to I2C_SDA*/
  GPIO_PinAFConfig(EEPROM_I2C_SDA_GPIO_PORT, EEPROM_I2C_SDA_SOURCE, EEPROM_I2C_SDA_AF);  
  
  /*!< Configure EEPROM_I2C pins: SCL */   
  GPIO_InitStructure.GPIO_Pin = EEPROM_I2C_SCL_PIN;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_OD;
  GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_NOPULL;
  GPIO_Init(EEPROM_I2C_SCL_GPIO_PORT, &GPIO_InitStructure);

  /*!< Configure EEPROM_I2C pins: SDA */
  GPIO_InitStructure.GPIO_Pin = EEPROM_I2C_SDA_PIN;
  GPIO_Init(EEPROM_I2C_SDA_GPIO_PORT, &GPIO_InitStructure);
 
}

/**
  * @brief  I2C 工作模式配置
  * @param  无
  * @retval 无
  */
void I2C_Mode_Configu(void)
{
  I2C_InitTypeDef  I2C_InitStructure; 

  /* I2C 配置 */
  I2C_InitStructure.I2C_Mode = I2C_Mode_I2C;	
  I2C_InitStructure.I2C_DutyCycle = I2C_DutyCycle_2;		                    /* 高电平数据稳定，低电平数据变化 SCL 时钟线的占空比 */
  I2C_InitStructure.I2C_OwnAddress1 =I2C_OWN_ADDRESS7; 
  I2C_InitStructure.I2C_Ack = I2C_Ack_Enable ;	
  I2C_InitStructure.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit;	/* I2C的寻址模式 */
  I2C_InitStructure.I2C_ClockSpeed = I2C_Speed;	                            /* 通信速率 */
  I2C_Init(EEPROM_I2C, &I2C_InitStructure);	                                      /* I2C1 初始化 */
  I2C_Cmd(EEPROM_I2C, ENABLE);  	                                                /* 使能 I2C1 */

  I2C_AcknowledgeConfig(EEPROM_I2C, ENABLE);  
}

void I2C_EE_Init(void)
{
  I2C_GPIO_Config(); 
  I2C_Mode_Configu();
}
	
uint32_t I2C_EE_BufferRead(u8* pBuffer, u8 ReadAddr, u16 NumByteToRead)
{  
  I2CTimeout = I2Cx_LONG_TIMEOUT;

  while(I2C_GetFlagStatus(EEPROM_I2C, I2C_FLAG_BUSY))   
  {
			
  }

  I2C_GenerateSTART(EEPROM_I2C, ENABLE);
  
  I2CTimeout = I2Cx_LONG_TIMEOUT;

  /* Test on EV5 and clear it */
  while(!I2C_CheckEvent(EEPROM_I2C, I2C_EVENT_MASTER_MODE_SELECT))
  {

  }

  /* Send EEPROM address for write */
  I2C_Send7bitAddress(EEPROM_I2C, EEPROM_ADDRESS, I2C_Direction_Transmitter);

  I2CTimeout = I2Cx_LONG_TIMEOUT;
 
  /* Test on EV6 and clear it */
  while(!I2C_CheckEvent(EEPROM_I2C, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED)) 
  {

  }
  /* Clear EV6 by setting again the PE bit */
  I2C_Cmd(EEPROM_I2C, ENABLE);

  /* Send the EEPROM's internal address to write to */
  I2C_SendData(EEPROM_I2C, ReadAddr);  

  I2CTimeout = I2Cx_LONG_TIMEOUT;

  /* Test on EV8 and clear it */
  while(!I2C_CheckEvent(EEPROM_I2C, I2C_EVENT_MASTER_BYTE_TRANSMITTED))
  {
		 
  }
  /* Send STRAT condition a second time */  
  I2C_GenerateSTART(EEPROM_I2C, ENABLE);
  
  I2CTimeout = I2Cx_LONG_TIMEOUT;

  /* Test on EV5 and clear it */
  while(!I2C_CheckEvent(EEPROM_I2C, I2C_EVENT_MASTER_MODE_SELECT))
  {

  }
  /* Send EEPROM address for read */
  I2C_Send7bitAddress(EEPROM_I2C, EEPROM_ADDRESS, I2C_Direction_Receiver);
  
  I2CTimeout = I2Cx_LONG_TIMEOUT;

  /* Test on EV6 and clear it */
  while(!I2C_CheckEvent(EEPROM_I2C, I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED))
  {

  }
  /* While there is data to be read */
  while(NumByteToRead)  
  {
    if(NumByteToRead == 1)
    {
      /* Disable Acknowledgement */
      I2C_AcknowledgeConfig(EEPROM_I2C, DISABLE);
      
      /* Send STOP Condition */
      I2C_GenerateSTOP(EEPROM_I2C, ENABLE);
    }

		
		I2CTimeout = I2Cx_LONG_TIMEOUT;
		while(I2C_CheckEvent(EEPROM_I2C, I2C_EVENT_MASTER_BYTE_RECEIVED)==0)  
		{

		} 	
		{
		  /* Read a byte from the device */
      *pBuffer = I2C_ReceiveData(EEPROM_I2C);

      /* Point to the next location where the byte read will be saved */
      pBuffer++; 
      
      /* Decrement the read bytes counter */
      NumByteToRead--;
		}			
  }

  /* Enable Acknowledgement to be ready for another reception */
  I2C_AcknowledgeConfig(EEPROM_I2C, ENABLE);
  
  return 1;
}

uint32_t I2C_EE_ByteWrite(u8* pBuffer, u8 WriteAddr)
{
  /* Send STRAT condition */
  I2C_GenerateSTART(EEPROM_I2C, ENABLE);

  I2CTimeout = I2Cx_FLAG_TIMEOUT;

  /* Test on EV5 and clear it */
  while(!I2C_CheckEvent(EEPROM_I2C, I2C_EVENT_MASTER_MODE_SELECT))
  {

  }    

  /* Send EEPROM address for write */
  I2C_Send7bitAddress(EEPROM_I2C, EEPROM_ADDRESS, I2C_Direction_Transmitter);
  
  
  I2CTimeout = I2Cx_FLAG_TIMEOUT;
  /* Test on EV6 and clear it */
  while(!I2C_CheckEvent(EEPROM_I2C, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED))
  {

  }    
      
  /* Send the EEPROM's internal address to write to */
  I2C_SendData(EEPROM_I2C, WriteAddr);
  
  I2CTimeout = I2Cx_FLAG_TIMEOUT;

  /* Test on EV8 and clear it */
  while(!I2C_CheckEvent(EEPROM_I2C, I2C_EVENT_MASTER_BYTE_TRANSMITTED))  
  {

  } 
  /* Send the byte to be written */
  I2C_SendData(EEPROM_I2C, *pBuffer); 
   
  I2CTimeout = I2Cx_FLAG_TIMEOUT;

  /* Test on EV8 and clear it */
  while(!I2C_CheckEvent(EEPROM_I2C, I2C_EVENT_MASTER_BYTE_TRANSMITTED))
  {

  } 
  
  /* Send STOP condition */
  I2C_GenerateSTOP(EEPROM_I2C, ENABLE);
  
  return 1;
}
// 0x36


