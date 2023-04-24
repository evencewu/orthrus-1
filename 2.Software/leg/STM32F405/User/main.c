/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2015-xx-xx
  * @brief   使用RS232串口，中断接收测试，演示接收数据到buff，并进行简单命令处理。
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火  STM32 F407 开发板
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "stm32f4xx.h"
#include "./usart/bsp_rs232_usart.h"
#include "./i2c/bsp_i2c_ee.h"
#include "./i2c/bsp_i2c_gpio.h"


volatile uint8_t ucTemp;
volatile uint8_t data[10];
volatile uint8_t data_flag;

void angle_set(void);

volatile int16_t angle_x; 
int16_t angle_y; 
int16_t angle_z;

uint8_t add;
uint8_t test_flag = 0;

uint8_t IIC_flag = 1;

uint8_t buff;
int main(void)
{
	data_flag = 0;
  Debug_USART_Config();
	//IIC_flag = i2c_CheckDevice(0x36);
	
  while(1)
	{
		if(data_flag)
		{
			if(data[0] == 0x53)
			{
				angle_set();
			}
			data_flag = 0;
		}
	}	
}

void angle_set(void)
{
	add = 0x55 + 0x53 + data[1] + data[2] + data[3] + data[4] + data[5] + data[6] + data[7] + data[8];
	if(data[9] == add)
	{
		angle_x = (int16_t)(((int16_t)data[2]<<8)|data[1]);// /32768*180
		angle_y = (int16_t)(((int16_t)data[4]<<8)|data[3]);// /32768*180
		angle_z = (int16_t)(((int16_t)data[6]<<8)|data[5]);// /32768*180
	}
}



