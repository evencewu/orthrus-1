//############################################################
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//��Ȩ���У�����ؾ�
//EtherCAT��վѧϰ��
//Author��͢���������
//�Ա�����: https://shop461235811.taobao.com/
//�ҵĲ��ͣ�https://blog.csdn.net/zhandouhu/article/category/9455918
//############################################################

#include "stm32f4xx.h"
#include "ecat_def.h"

/*******************************************************************************
* Function Name  : TIM_Configuration
* Description    : TIM_Configuration program.
* Input          : None
* Output         : None
* Return         : None
* Attention		 : None
*******************************************************************************/
void TIM_Configuration(uint8_t period)		//100us
{
  TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	NVIC_InitTypeDef NVIC_InitStructure; 
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2 , ENABLE);
	
  TIM_DeInit(TIM2);
  TIM_TimeBaseStructure.TIM_Period= period*200 ; //200;		 					/* �Զ���װ�ؼĴ������ڵ�ֵ(����ֵ) */
																	/* �ۼ� TIM_Period��Ƶ�ʺ����һ�����»����ж� */
  TIM_TimeBaseStructure.TIM_Prescaler= (42 - 1);				    /* ʱ��Ԥ��Ƶ��   ���磺ʱ��Ƶ��=72MHZ/(ʱ��Ԥ��Ƶ+1) */
  TIM_TimeBaseStructure.TIM_ClockDivision=TIM_CKD_DIV1; 			/* ������Ƶ */
  TIM_TimeBaseStructure.TIM_CounterMode=TIM_CounterMode_Up; 		/* ���ϼ���ģʽ */
  TIM_TimeBaseInit(TIM2, &TIM_TimeBaseStructure);
  TIM_ClearFlag(TIM2, TIM_FLAG_Update);							    /* �������жϱ�־ */
	#if ECAT_TIMER_INT
  TIM_ITConfig(TIM2,TIM_IT_Update,ENABLE);
	#endif
  TIM_Cmd(TIM2, ENABLE);											/* ����ʱ�� */
	
	#if ECAT_TIMER_INT
						/* Configure NVIC Interrupt  -------------------------*/	
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);  													
		NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;	  
		NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
		NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;	
		NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
		NVIC_Init(&NVIC_InitStructure);
	#endif

}
