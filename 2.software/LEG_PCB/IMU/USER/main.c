//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//�о�԰����
//���̵�ַ��http://shop73023976.taobao.com
//
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   : HuangKai
//  ��������   : 2018-10-31
//  ����޸�   : 
//  ��������   :��ʾ����(STM32F103ϵ��)
//              ˵��: 
//              ----------------------------------------------------------------
//              GND   ��Դ��
//              VCC   3.3v��Դ
//              SCL   PA0��SCLK��
//              SDA   PA1��MOSI��
//              RES   PA2
//              DC    PA3
//              CS    PA4
//              BLK   PA5
//              --------------             ---------- ----------------------------------------
// �޸���ʷ   :
// ��    ��   : 
// ��    ��   : HuangKai
// �޸�����   : �����ļ�
//��Ȩ���У�����ؾ���
//Copyright(C) �о�԰����2018-10-31
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


//�ô���2��JYģ�鷢��ָ��
void sendcmd(char cmd[])
{
	char i;
	for(i=0;i<3;i++)
		UART3_Put_Char(cmd[i]);
}

//CopeSerialDataΪ����2�жϵ��ú���������ÿ�յ�һ�����ݣ�����һ�����������
void CopeSerial3Data(unsigned char ucData)
{
	static unsigned char ucRxBuffer[250];
	static unsigned char ucRxCnt = 0;	
	
	ucRxBuffer[ucRxCnt++]=ucData;	//���յ������ݴ��뻺������
	if (ucRxBuffer[0]!=0x55) //����ͷ���ԣ������¿�ʼѰ��0x55����ͷ
	{
		ucRxCnt=0;
		return;
	}
	if (ucRxCnt<11) {return;}//���ݲ���11�����򷵻�
	else
	{
		switch(ucRxBuffer[1])//�ж��������������ݣ�Ȼ���俽������Ӧ�Ľṹ���У���Щ���ݰ���Ҫͨ����λ���򿪶�Ӧ������󣬲��ܽ��յ�������ݰ�������
		{
			//memcpyΪ�������Դ����ڴ濽��������������"string.h"�������ջ��������ַ����������ݽṹ�����棬�Ӷ�ʵ�����ݵĽ�����
			case 0x51:	memcpy(&stcAcc,&ucRxBuffer[2],8);break;
			case 0x52:	memcpy(&stcGyro,&ucRxBuffer[2],8);break;
			case 0x53:	memcpy(&stcAngle,&ucRxBuffer[2],8);break;

		}
		ucRxCnt=0;//��ջ�����
	}
}

void CopeSerial1Data(unsigned char ucData)
{	
	UART3_Put_Char(ucData);//ת������1�յ������ݸ�����2��JYģ�飩
}

int main(void)
{
	
	unsigned char i = 0;
		
	delay_init();
	Initial_UART1(9600);//��PC�Ĵ���
	Initial_UART3(9600);//��JY61ģ��Ĵ���	
	
	delay_ms(1000);delay_ms(1000);
	
	LCD_Init();//LCD��ʼ��
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
			//printf("���ڽ��м��ٶ�У׼\r\n");
			sendcmd(ACCCMD);//�ȴ�ģ���ڲ��Զ�У׼�ã�ģ���ڲ����Զ�������Ҫһ����ʱ��
			//printf("���ٶ�У׼���\r\n");
			delay_ms(10);
			//printf("����Z��Ƕ�����\r\n");
			sendcmd(YAWCMD);
			//printf("Z��Ƕ��������\r\n");
		}
		printf("-----------------------------------\r\n");
		//������ٶ�
		//���ڽ��ܵ��������Ѿ���������Ӧ�Ľṹ��ı������ˣ�����˵�����Э�飬�Լ��ٶ�Ϊ�� stcAcc.a[0]/32768*16����X��ļ��ٶȣ�
		LCD_ShowFloatNum1(100,5,(float)stcAcc.a[0]/32768*16,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,20,(float)stcAcc.a[1]/32768*16,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,35,(float)stcAcc.a[2]/32768*16,5,WHITE,BLACK,16);
		//printf("Acc:%.3f %.3f %.3f\r\n",(float)stcAcc.a[0]/32768*16,(float)stcAcc.a[1]/32768*16,(float)stcAcc.a[2]/32768*16);
		delay_ms(10);
		//������ٶ�
		LCD_ShowFloatNum1(100,50,(float)stcGyro.w[0]/32768*2000,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,65,(float)stcGyro.w[1]/32768*2000,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,80,(float)stcGyro.w[2]/32768*2000,5,WHITE,BLACK,16);
		//printf("Gyro:%.3f %.3f %.3f\r\n",(float)stcGyro.w[0]/32768*2000,(float)stcGyro.w[1]/32768*2000,(float)stcGyro.w[2]/32768*2000);
		delay_ms(10);
		//����Ƕ�
		LCD_ShowFloatNum1(100,95,(float)stcAngle.Angle[0]/32768*180,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,110,(float)stcAngle.Angle[1]/32768*180,5,WHITE,BLACK,16);
		LCD_ShowFloatNum1(100,125,(float)stcAngle.Angle[2]/32768*180,5,WHITE,BLACK,16);
		//printf("Angle:%.3f %.3f %.3f\r\n",(float)stcAngle.Angle[0]/32768*180,(float)stcAngle.Angle[1]/32768*180,(float)stcAngle.Angle[2]/32768*180);
		delay_ms(10);//�ȴ��������
		
		start_logo();
	}
}
