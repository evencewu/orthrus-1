/*
@ link:   http://wit-motion.cn/

@ Function:
	1. Power on automatic detection sensor.
	2. Read acceleration, angular velocity, angle and magnetic field data.
	3. Set switching can baud rate parameters.

USB-TTL                    STM32Core              		JY901S
VCC          -----           VCC        ----        	 VCC
TX           -----           RX1  (GPIOA_10)   
RX           -----           TX1  (GPIOA_9)
GND          -----           GND    ----       			 GND
                             SDA2  (GPIOB_11)  ----        SDA
							 SCL2  (GPIOB_10)  ----        SCL
------------------------------------
*/
#include <string.h>
#include <stdio.h>
#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "misc.h"
#include "wit_c_sdk.h"
#include "UART1.h"
#include "UART2.h"
#include "delay.h"
#include "IOI2C.h"

#define ACC_UPDATE		0x01
#define GYRO_UPDATE		0x02
#define ANGLE_UPDATE	0x04
#define MAG_UPDATE		0x08
#define READ_UPDATE		0x80
static volatile char s_cDataUpdate = 0, s_cCmd = 0xff;

static void CmdProcess(void);
static void AutoScanSensor(void);
static void CopeSensorData(uint32_t uiReg, uint32_t uiRegNum);
static void Delayms(uint16_t ucMs);

int main(void)
{
	float fAcc[3], fGyro[3], fAngle[3];
	int i;
	SysTick_Init();
	Usart1Init(115200);
	IIC_Init();
	WitInit(WIT_PROTOCOL_I2C, 0x50);
	WitI2cFuncRegister(IICwriteBytes, IICreadBytes);
	WitRegisterCallBack(CopeSensorData);
	WitDelayMsRegister(Delayms);
	printf("\r\n********************** wit-motion IIC example  ************************\r\n");
	AutoScanSensor();
	while (1)
	{
		WitReadReg(AX, 12);
		delay_ms(500);
		CmdProcess();
		if(s_cDataUpdate)
		{
			for(i = 0; i < 3; i++)
			{
				fAcc[i] = sReg[AX+i] / 32768.0f * 16.0f;
				fGyro[i] = sReg[GX+i] / 32768.0f * 2000.0f;
				fAngle[i] = sReg[Roll+i] / 32768.0f * 180.0f;
			}
			if(s_cDataUpdate & ACC_UPDATE)
			{
				printf("acc:%.3f %.3f %.3f\r\n", fAcc[0], fAcc[1], fAcc[2]);
				s_cDataUpdate &= ~ACC_UPDATE;
			}
			if(s_cDataUpdate & GYRO_UPDATE)
			{
				printf("gyro:%.3f %.3f %.3f\r\n", fGyro[0], fGyro[1], fGyro[2]);
				s_cDataUpdate &= ~GYRO_UPDATE;
			}
			if(s_cDataUpdate & ANGLE_UPDATE)
			{
				printf("angle:%.3f %.3f %.3f\r\n", fAngle[0], fAngle[1], fAngle[2]);
				s_cDataUpdate &= ~ANGLE_UPDATE;
			}
			if(s_cDataUpdate & MAG_UPDATE)
			{
				printf("mag:%d %d %d\r\n", sReg[HX], sReg[HY], sReg[HZ]);
				s_cDataUpdate &= ~MAG_UPDATE;
			}
		}
	}
}


void CopeCmdData(unsigned char ucData)
{
	static unsigned char s_ucData[50], s_ucRxCnt = 0;
	
	s_ucData[s_ucRxCnt++] = ucData;
	if(s_ucRxCnt<3)return;										//Less than three data returned
	if(s_ucRxCnt >= 50) s_ucRxCnt = 0;
	if(s_ucRxCnt >= 3)
	{
		if((s_ucData[1] == '\r') && (s_ucData[2] == '\n'))
		{
			s_cCmd = s_ucData[0];
			memset(s_ucData,0,50);//
			s_ucRxCnt = 0;
		}
		else 
		{
			s_ucData[0] = s_ucData[1];
			s_ucData[1] = s_ucData[2];
			s_ucRxCnt = 2;
			
		}
	}

}
static void ShowHelp(void)
{
	printf("\r\n************************	 WIT_SDK_DEMO	************************");
	printf("\r\n************************          HELP           ************************\r\n");
	printf("UART SEND:a\\r\\n   Acceleration calibration.\r\n");
	printf("UART SEND:m\\r\\n   Magnetic field calibration,After calibration send:   e\\r\\n   to indicate the end\r\n");
	printf("UART SEND:U\\r\\n   Bandwidth increase.\r\n");
	printf("UART SEND:u\\r\\n   Bandwidth reduction.\r\n");
	printf("UART SEND:B\\r\\n   Baud rate increased to 115200.\r\n");
	printf("UART SEND:b\\r\\n   Baud rate reduction to 9600.\r\n");
	printf("UART SEND:h\\r\\n   help.\r\n");
	printf("******************************************************************************\r\n");
}

static void CmdProcess(void)
{
	switch(s_cCmd)
	{
		case 'a':	
				if(WitStartAccCali() != WIT_HAL_OK) 
					printf("\r\nSet AccCali Error\r\n");
			break;
		case 'm':	
				if(WitStartMagCali() != WIT_HAL_OK) 
					printf("\r\nStart MagCali Error\r\n");
			break;
		case 'e':	
				if(WitStopMagCali() != WIT_HAL_OK) 
					printf("\r\nEnd MagCali Error\r\n");
			break;
		case 'u':	
				if(WitSetBandwidth(BANDWIDTH_5HZ) != WIT_HAL_OK) 
					printf("\r\nSet Bandwidth Error\r\n");
			break;
		case 'U':	
				if(WitSetBandwidth(BANDWIDTH_256HZ) != WIT_HAL_OK)
					printf("\r\nSet Bandwidth Error\r\n");
			break;
		case 'B':	
				if(WitSetUartBaud(WIT_BAUD_115200) != WIT_HAL_OK) 
					printf("\r\nSet Baud Error\r\n");
			break;
		case 'b':	
				if(WitSetUartBaud(WIT_BAUD_9600) != WIT_HAL_OK) 
					printf("\r\nSet Baud Error\r\n");
			break;
		case 'h':	
				ShowHelp();
			break;
		default : return ;
	}
	s_cCmd = 0xff;
}

static void CopeSensorData(uint32_t uiReg, uint32_t uiRegNum)
{
	int i;
    for(i = 0; i < uiRegNum; i++)
    {
        switch(uiReg)
        {
//            case AX:
//            case AY:
            case AZ:
				s_cDataUpdate |= ACC_UPDATE;
            break;
//            case GX:
//            case GY:
            case GZ:
				s_cDataUpdate |= GYRO_UPDATE;
            break;
//            case HX:
//            case HY:
            case HZ:
				s_cDataUpdate |= MAG_UPDATE;
            break;
//            case Roll:
//            case Pitch:
            case Yaw:
				s_cDataUpdate |= ANGLE_UPDATE;
            break;
            default:
				s_cDataUpdate |= READ_UPDATE;
			break;
        }
		uiReg++;
    }
}

static void Delayms(uint16_t ucMs)
{
	delay_ms(ucMs);
}

static void AutoScanSensor(void)
{
	int i, iRetry;
	
	for(i = 0; i < 0x7F; i++)
	{
		WitInit(WIT_PROTOCOL_I2C, i);
		iRetry = 2;
		do
		{
			s_cDataUpdate = 0;
			WitReadReg(AX, 3);
			delay_ms(5);
			if(s_cDataUpdate != 0)
			{
				printf("find %02X addr sensor\r\n", i);
				ShowHelp();
				return ;
			}
			iRetry--;
		}while(iRetry);		
	}
	printf("can not find sensor\r\n");
	printf("please check your connection\r\n");
}

