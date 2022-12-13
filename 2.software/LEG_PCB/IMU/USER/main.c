//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//中景园电子
//店铺地址：http://shop73023976.taobao.com
//
//  文 件 名   : main.c
//  版 本 号   : v2.0
//  作    者   : HuangKai
//  生成日期   : 2018-10-31
//  最近修改   : 
//  功能描述   :演示例程(STM32F103系列)
//              说明: 
//              ----------------------------------------------------------------
//              GND   电源地
//              VCC   3.3v电源
//              SCL   PA0（SCLK）
//              SDA   PA1（MOSI）
//              RES   PA2
//              DC    PA3
//              CS    PA4
//              BLK   PA5
//              --------------             ---------- ----------------------------------------
// 修改历史   :
// 日    期   : 
// 作    者   : HuangKai
// 修改内容   : 创建文件
//版权所有，盗版必究。
//Copyright(C) 中景园电子2018-10-31
//All rights reserved
//******************************************************************************/
#include <string.h>
#include <stdio.h>
#include "delay.h"
#include "sys.h"

#include "lcd_init.h"
#include "lcd.h"
#include "menu_ui.h"

#include "UART1.h"
#include "UART2.h"
#include "delay.h"
#include "JY61.h"

struct SAcc 		stcAcc;
struct SGyro 		stcGyro;
struct SAngle 	stcAngle;


//用串口2给JY模块发送指令
void sendcmd(char cmd[])
{
	char i;
	for(i=0;i<3;i++)
		UART3_Put_Char(cmd[i]);
}

//CopeSerialData为串口2中断调用函数，串口每收到一个数据，调用一次这个函数。
void CopeSerial3Data(unsigned char ucData)
{
	static unsigned char ucRxBuffer[250];
	static unsigned char ucRxCnt = 0;	
	
	ucRxBuffer[ucRxCnt++]=ucData;	//将收到的数据存入缓冲区中
	if (ucRxBuffer[0]!=0x55) //数据头不对，则重新开始寻找0x55数据头
	{
		ucRxCnt=0;
		return;
	}
	if (ucRxCnt<11) {return;}//数据不满11个，则返回
	else
	{
		switch(ucRxBuffer[1])//判断数据是哪种数据，然后将其拷贝到对应的结构体中，有些数据包需要通过上位机打开对应的输出后，才能接收到这个数据包的数据
		{
			//memcpy为编译器自带的内存拷贝函数，需引用"string.h"，将接收缓冲区的字符拷贝到数据结构体里面，从而实现数据的解析。
			case 0x51:	memcpy(&stcAcc,&ucRxBuffer[2],8);break;
			case 0x52:	memcpy(&stcGyro,&ucRxBuffer[2],8);break;
			case 0x53:	memcpy(&stcAngle,&ucRxBuffer[2],8);break;

		}
		ucRxCnt=0;//清空缓存区
	}
}

void CopeSerial1Data(unsigned char ucData)
{	
	UART3_Put_Char(ucData);//转发串口1收到的数据给串口2（JY模块）
}

int main(void)
{
	
	unsigned char i = 0;
		
	delay_init();
	Initial_UART1(9600);//接PC的串口
	Initial_UART3(9600);//接JY61模块的串口	
	
	delay_ms(1000);delay_ms(1000);
	
	LCD_Init();//LCD初始化
	LCD_Fill(0,0,LCD_W,LCD_H,BLACK);
	LED=0;
	
	LCD_ShowString(20,5,"acc_x",WHITE,BLACK,16,0);
	LCD_ShowString(20,20,"acc_y",WHITE,BLACK,16,0);
	LCD_ShowString(20,35,"acc_z",WHITE,BLACK,16,0);
	
	LCD_ShowString(20,50,"gyro_x",WHITE,BLACK,16,0);
	LCD_ShowString(20,65,"gyro_y",WHITE,BLACK,16,0);
	LCD_ShowString(20,80,"gyro_z",WHITE,BLACK,16,0);
	
	LCD_ShowString(20,95,"angle_x",WHITE,BLACK,16,0);
	LCD_ShowString(20,110,"angle_y",WHITE,BLACK,16,0);
	LCD_ShowString(20,125,"angle_z",WHITE,BLACK,16,0);

	while(1)
	{
		i++;
		if(i>10)
		{
			i = 0;
			//printf("正在进行加速度校准\r\n");
			sendcmd(ACCCMD);//等待模块内部自动校准好，模块内部会自动计算需要一定的时间
			//printf("加速度校准完成\r\n");
			delay_ms(10);
			//printf("进行Z轴角度清零\r\n");
			sendcmd(YAWCMD);
			//printf("Z轴角度清零完成\r\n");
		}
		printf("-----------------------------------\r\n");
		//输出加速度
		//串口接受到的数据已经拷贝到对应的结构体的变量中了，根据说明书的协议，以加速度为例 stcAcc.a[0]/32768*16就是X轴的加速度，
		LCD_ShowFloatNum1(100,5,(float)stcAcc.a[0]/32768*16,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,20,(float)stcAcc.a[1]/32768*16,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,35,(float)stcAcc.a[2]/32768*16,5,WHITE,BLACK,16);
		//printf("Acc:%.3f %.3f %.3f\r\n",(float)stcAcc.a[0]/32768*16,(float)stcAcc.a[1]/32768*16,(float)stcAcc.a[2]/32768*16);
		delay_ms(10);
		//输出角速度
		LCD_ShowFloatNum1(100,50,(float)stcGyro.w[0]/32768*2000,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,65,(float)stcGyro.w[1]/32768*2000,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,80,(float)stcGyro.w[2]/32768*2000,5,WHITE,BLACK,16);
		//printf("Gyro:%.3f %.3f %.3f\r\n",(float)stcGyro.w[0]/32768*2000,(float)stcGyro.w[1]/32768*2000,(float)stcGyro.w[2]/32768*2000);
		delay_ms(10);
		//输出角度
		LCD_ShowFloatNum1(100,95,(float)stcAngle.Angle[0]/32768*180,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,110,(float)stcAngle.Angle[1]/32768*180,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,125,(float)stcAngle.Angle[2]/32768*180,5,WHITE,BLACK,16);
		//printf("Angle:%.3f %.3f %.3f\r\n",(float)stcAngle.Angle[0]/32768*180,(float)stcAngle.Angle[1]/32768*180,(float)stcAngle.Angle[2]/32768*180);
		delay_ms(10);//等待传输完成
		
		start_logo();
	}
}
