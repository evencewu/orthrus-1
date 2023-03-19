//############################################################
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//版权所有，盗版必究
//EtherCAT从站学习板
//Author：廷华电子设计
//淘宝店铺: https://shop461235811.taobao.com/
//我的博客：https://blog.csdn.net/zhandouhu/article/category/9455918
//############################################################
/**
\file    el9800hw.c
\author EthercatSSC@beckhoff.com
\brief Implementation
Hardware access implementation for EL9800 onboard PIC18/PIC24 connected via SPI to ESC

\version 5.11

<br>Changes to version V5.10:<br>
V5.11 ECAT10: change PROTO handling to prevent compiler errors<br>
V5.11 EL9800 2: change PDI access test to 32Bit ESC access and reset AL Event mask after test even if AL Event is not enabled<br>
<br>Changes to version V5.01:<br>
V5.10 ESC5: Add missing swapping<br>
V5.10 HW3: Sync1 Isr added<br>
V5.10 HW4: Add volatile directive for direct ESC DWORD/WORD/BYTE access<br>
           Add missing swapping in mcihw.c<br>
           Add "volatile" directive vor dummy variables in enable and disable SyncManger functions<br>
           Add missing swapping in EL9800hw files<br>
<br>Changes to version V5.0:<br>
V5.01 HW1: Invalid ESC access function was used<br>
<br>Changes to version V4.40:<br>
V5.0 ESC4: Save SM disable/Enable. Operation may be pending due to frame handling.<br>
<br>Changes to version V4.30:<br>
V4.40 : File renamed from spihw.c to el9800hw.c<br>
<br>Changes to version V4.20:<br>
V4.30 ESM: if mailbox Syncmanger is disabled and bMbxRunning is true the SyncManger settings need to be revalidate<br>
V4.30 EL9800: EL9800_x hardware initialization is moved to el9800.c<br>
V4.30 SYNC: change synchronisation control function. Add usage of 0x1C32:12 [SM missed counter].<br>
Calculate bus cycle time (0x1C32:02 ; 0x1C33:02) CalcSMCycleTime()<br>
V4.30 PDO: rename PDO specific functions (COE_xxMapping -> PDO_xxMapping and COE_Application -> ECAT_Application)<br>
V4.30 ESC: change requested address in GetInterruptRegister() to prevent acknowledge events.<br>
(e.g. reading an SM config register acknowledge SM change event)<br>
GENERIC: renamed several variables to identify used SPI if multiple interfaces are available<br>
V4.20 MBX 1: Add Mailbox queue support<br>
V4.20 SPI 1: include SPI RxBuffer dummy read<br>
V4.20 DC 1: Add Sync0 Handling<br>
V4.20 PIC24: Add EL9800_4 (PIC24) required source code<br>
V4.08 ECAT 3: The AlStatusCode is changed as parameter of the function AL_ControlInd<br>
<br>Changes to version V4.02:<br>
V4.03 SPI 1: In ISR_GetInterruptRegister the NOP-command should be used.<br>
<br>Changes to version V4.01:<br>
V4.02 SPI 1: In HW_OutputMapping the variable u16OldTimer shall not be set,<br>
             otherwise the watchdog might exceed too early.<br>
<br>Changes to version V4.00:<br>
V4.01 SPI 1: DI and DO were changed (DI is now an input for the uC, DO is now an output for the uC)<br>
V4.01 SPI 2: The SPI has to operate with Late-Sample = FALSE on the Eva-Board<br>
<br>Changes to version V3.20:<br>
V4.00 ECAT 1: The handling of the Sync Manager Parameter was included according to<br>
              the EtherCAT Guidelines and Protocol Enhancements Specification<br>
V4.00 APPL 1: The watchdog checking should be done by a microcontroller<br>
                 timer because the watchdog trigger of the ESC will be reset too<br>
                 if only a part of the sync manager data is written<br>
V4.00 APPL 4: The EEPROM access through the ESC is added

*/


/*--------------------------------------------------------------------------------------
------
------    Includes
------
--------------------------------------------------------------------------------------*/
#include "ecat_def.h"
#if EL9800_HW
#include "SPI1.h"
#include "ecatslv.h"

#define    _EL9800HW_ 1
#include "el9800hw.h"
#undef    _EL9800HW_
/* ECATCHANGE_START(V5.11) ECAT10*/
/*remove definition of _EL9800HW_ (#ifdef is used in el9800hw.h)*/
/* ECATCHANGE_END(V5.11) ECAT10*/

#include "ecatappl.h"
#include "system.h"

/*--------------------------------------------------------------------------------------
------
------    internal Types and Defines
------
--------------------------------------------------------------------------------------*/

typedef union
{
    unsigned short    Word;
    unsigned char    Byte[2];
} UBYTETOWORD;

typedef union 
{
    UINT8           Byte[2];
    UINT16          Word;
}
UALEVENT;

/*-----------------------------------------------------------------------------------------
------
------    SPI defines/macros
------
-----------------------------------------------------------------------------------------*/
#define SPI_DEACTIVE                    1
#define SPI_ACTIVE                        0


#if INTERRUPTS_SUPPORTED
/*-----------------------------------------------------------------------------------------
------
------    Global Interrupt setting
------
-----------------------------------------------------------------------------------------*/

#define DISABLE_GLOBAL_INT           		   __disable_irq()			
#define ENABLE_GLOBAL_INT           		    __enable_irq()				
#define    DISABLE_AL_EVENT_INT           DISABLE_GLOBAL_INT
#define    ENABLE_AL_EVENT_INT            ENABLE_GLOBAL_INT



/*-----------------------------------------------------------------------------------------
------
------    ESC Interrupt
------
-----------------------------------------------------------------------------------------*/
#if AL_EVENT_ENABLED
#define    INIT_ESC_INT           EXTI8_Configuration();					
#define    EcatIsr                EXTI9_5_IRQHandler
#define    ACK_ESC_INT         		EXTI_ClearITPendingBit(EXTI_Line8);  

#endif //#if AL_EVENT_ENABLED

/*-----------------------------------------------------------------------------------------
------
------    SYNC0 Interrupt
------
-----------------------------------------------------------------------------------------*/
#if DC_SUPPORTED && _STM32_IO8
#define    INIT_SYNC0_INT                  EXTI0_Configuration();		//EXTI1_Configuration--EXTI0_Configuration
#define    Sync0Isr                        				EXTI0_IRQHandler // primary interrupt vector name
#define    DISABLE_SYNC0_INT             NVIC_DisableIRQ(EXTI0_IRQn);	  // {(_INT3IE)=0;}//disable interrupt source INT3
#define    ENABLE_SYNC0_INT               NVIC_EnableIRQ(EXTI0_IRQn);	// {(_INT3IE) = 1;} //enable interrupt source INT3
#define    ACK_SYNC0_INT                  EXTI_ClearITPendingBit(EXTI_Line0);//  {(SYNC0_INT_REQ) = 0;}


/*ECATCHANGE_START(V5.10) HW3*/

#define    INIT_SYNC1_INT                  EXTI1_Configuration();
#define    Sync1Isr                        						EXTI1_IRQHandler
#define    DISABLE_SYNC1_INT                 NVIC_DisableIRQ(EXTI1_IRQn);// {(_INT4IE)=0;}//disable interrupt source INT4
#define    ENABLE_SYNC1_INT                 NVIC_EnableIRQ(EXTI1_IRQn); //{(_INT4IE) = 1;} //enable interrupt source INT4
#define    ACK_SYNC1_INT                  	 EXTI_ClearITPendingBit(EXTI_Line1);// {(SYNC1_INT_REQ) = 0;}

/*ECATCHANGE_END(V5.10) HW3*/

#endif //#if DC_SUPPORTED && _STM32_IO8

#endif	//#if INTERRUPTS_SUPPORTED
/*-----------------------------------------------------------------------------------------
------
------    Hardware timer
------
-----------------------------------------------------------------------------------------*/
#if _STM32_IO8
#if ECAT_TIMER_INT
#define ECAT_TIMER_INT_STATE       
#define ECAT_TIMER_ACK_INT        		 	TIM_ClearITPendingBit(TIM2 , TIM_FLAG_Update);	
#define    TimerIsr                    	TIM2_IRQHandler //	SysTick_Handler//						
#define    ENABLE_ECAT_TIMER_INT        NVIC_EnableIRQ(TIM2_IRQn) ;	//SysTick->CTRL |= SysTick_CTRL_TICKINT_Msk;//NVIC_EnableIRQ(TIM2_IRQn) ;	
#define    DISABLE_ECAT_TIMER_INT       NVIC_DisableIRQ(TIM2_IRQn) ;//SysTick->CTRL &= ~SysTick_CTRL_TICKINT_Msk;//NVIC_DisableIRQ(SysTick_IRQn/*TIM2_IRQn*/) ;

#define INIT_ECAT_TIMER            TIM_Configuration(10) ;  // SysTick_Config(SystemCoreClock/1000);  

#define STOP_ECAT_TIMER            DISABLE_ECAT_TIMER_INT;/*disable timer interrupt*/ \

#define START_ECAT_TIMER          ENABLE_ECAT_TIMER_INT


#else    //#if ECAT_TIMER_INT

#define INIT_ECAT_TIMER      					TIM_Configuration(10) //SysTick_Config(SystemCoreClock/1000);//          {(PR7) = 2000;/*set period*/ \

#define STOP_ECAT_TIMER              TIM_Cmd(TIM2, DISABLE);	// SysTick->CTRL  &=  ~SysTick_CTRL_ENABLE_Msk;      //			 

#define START_ECAT_TIMER              TIM_Cmd(TIM2, ENABLE);// SysTick->CTRL  |=  SysTick_CTRL_ENABLE_Msk;      			

#endif //#else #if ECAT_TIMER_INT

#elif _STM32_IO4

#if !ECAT_TIMER_INT
#define    ENABLE_ECAT_TIMER_INT       NVIC_EnableIRQ(TIM2_IRQn) ;	// SysTick->CTRL |= SysTick_CTRL_TICKINT_Msk;//
#define    DISABLE_ECAT_TIMER_INT      NVIC_DisableIRQ(TIM2_IRQn) ;//SysTick->CTRL &= ~SysTick_CTRL_TICKINT_Msk;//
#define INIT_ECAT_TIMER               TIM_Configuration(10) ;//	SysTick_Config(SystemCoreClock/1000);//			
#define STOP_ECAT_TIMER              	TIM_Cmd(TIM2, DISABLE);//	SysTick->CTRL  &=  ~SysTick_CTRL_ENABLE_Msk; //		
#define START_ECAT_TIMER           		TIM_Cmd(TIM2, ENABLE);	//	SysTick->CTRL  |=  SysTick_CTRL_ENABLE_Msk; //		

#else    //#if !ECAT_TIMER_INT

#warning "define Timer Interrupt Macros"

#endif //#else #if !ECAT_TIMER_INT
#endif //#elif _STM32_IO4

/*-----------------------------------------------------------------------------------------
------
------    Configuration Bits
------
-----------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------
------
------    LED defines
------
-----------------------------------------------------------------------------------------*/
#if _STM32_IO8
// EtherCAT Status LEDs -> StateMachine
#define LED_ECATGREEN               
#define LED_ECATRED                   
#endif //_STM32_IO8


/*--------------------------------------------------------------------------------------
------
------    internal Variables
------
--------------------------------------------------------------------------------------*/
UALEVENT         EscALEvent;            //contains the content of the ALEvent register (0x220), this variable is updated on each Access to the Esc

/*--------------------------------------------------------------------------------------
------
------    internal functions
------
--------------------------------------------------------------------------------------*/


/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief  The function operates a SPI access without addressing.

        The first two bytes of an access to the EtherCAT ASIC always deliver the AL_Event register (0x220).
        It will be saved in the global "EscALEvent"
*////////////////////////////////////////////////////////////////////////////////////////
static void GetInterruptRegister(void)
{

    #if AL_EVENT_ENABLED
    DISABLE_AL_EVENT_INT;
#endif
	
    /* select the SPI */
    SELECT_SPI;
	
	 HW_EscReadIsr((MEM_ADDR *)&EscALEvent.Word, 0x220, 2);
	/* if the SPI transmission rate is higher than 15 MBaud, the Busy detection shall be
       done here */
	
  DESELECT_SPI;
 #if AL_EVENT_ENABLED
    ENABLE_AL_EVENT_INT;
#endif
}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief  The function operates a SPI access without addressing.
        Shall be implemented if interrupts are supported else this function is equal to "GetInterruptRegsiter()"

        The first two bytes of an access to the EtherCAT ASIC always deliver the AL_Event register (0x220).
        It will be saved in the global "EscALEvent"
*////////////////////////////////////////////////////////////////////////////////////////
#if !INTERRUPTS_SUPPORTED
#define ISR_GetInterruptRegister GetInterruptRegister
#else
static void ISR_GetInterruptRegister(void)
{
    /* SPI should be deactivated to interrupt a possible transmission */
    DESELECT_SPI;

    /* select the SPI */
    SELECT_SPI;

		 HW_EscReadIsr((MEM_ADDR *)&EscALEvent.Word, 0x220, 2);

  /* if the SPI transmission rate is higher than 15 MBaud, the Busy detection shall be
       done here */

    DESELECT_SPI;
}
#endif //#else #if !INTERRUPTS_SUPPORTED

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief The function addresses the EtherCAT ASIC via SPI for a following SPI access.
*////////////////////////////////////////////////////////////////////////////////////////
static void AddressingEsc( UINT16 Address, UINT8 Command )
{
    UBYTETOWORD tmp;
    VARVOLATILE UINT8 dummy;
    tmp.Word = ( Address << 3 ) | Command;
    /* select the SPI */
    SELECT_SPI;


   /* there have to be at least 15 ns after the SPI1_SEL signal was active (0) before
       the transmission shall be started */
    /* send the first address/command byte to the ESC */
	
		dummy = 	WR_CMD(tmp.Byte[1]);
	
    /* send the second address/command byte to the ESC */
 
	dummy =	WR_CMD(tmp.Byte[0]);
	
    /* if the SPI transmission rate is higher than 15 MBaud, the Busy detection shall be
       done here */
}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \param Address     EtherCAT ASIC address ( upper limit is 0x1FFF )    for access.
 \param Command    ESC_WR performs a write access; ESC_RD performs a read access.

 \brief The function addresses the EtherCAT ASIC via SPI for a following SPI access.
        Shall be implemented if interrupts are supported else this function is equal to "AddressingEsc()"
*////////////////////////////////////////////////////////////////////////////////////////

#if !INTERRUPTS_SUPPORTED
#define ISR_AddressingEsc AddressingEsc
#else
static void ISR_AddressingEsc( UINT16 Address, UINT8 Command )
{
    VARVOLATILE UINT8 dummy;
    UBYTETOWORD tmp;
    tmp.Word = ( Address << 3 ) | Command;

    /* select the SPI */
    SELECT_SPI;

    /* there have to be at least 15 ns after the SPI1_SEL signal was active (0) before
      the transmission shall be started */
	
    /* send the first address/command byte to the ESC */
	dummy= WR_CMD(tmp.Byte[1]);
	
   /* send the second address/command byte to the ESC */

	dummy= WR_CMD(tmp.Byte[0]);
    /* if the SPI transmission rate is higher than 15 MBaud, the Busy detection shall be
       done here */
}
#endif //#else #if !INTERRUPTS_SUPPORTED
/*--------------------------------------------------------------------------------------
------
------    exported hardware access functions
------
--------------------------------------------------------------------------------------*/
/*******************************************************************************
* Function Name  : GPIO_Config
* Description    : init the led and swtich port
* Input          : None
* Output         : None
* Return         : None
* Attention		 : None
*******************************************************************************/
void GPIO_Config(void) 
{ 
  GPIO_InitTypeDef GPIO_InitStructure;

	  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB|RCC_AHB1Periph_GPIOC, ENABLE);
	 /* configration the LED pin */	

  /* Configure PG6 and PG8 in output pushpull mode */
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1 | GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14; //LED5-LED0
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4|GPIO_Pin_5; //LED7-LED6
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_Init(GPIOC, &GPIO_InitStructure);
	
	
	  /* Configure PG6 and PG8 in output pushpull mode */
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;//INPUT7
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_DOWN;
  GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	  /* Configure PG6 and PG8 in output pushpull mode */
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6|GPIO_Pin_7 | GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12;//INPUT6-0
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_DOWN;
  GPIO_Init(GPIOC, &GPIO_InitStructure);
	
	//GPIO_SetBits(GPIOB,GPIO_Pin_14);
	
} 

/////////////////////////////////////////////////////////////////////////////////////////
/**
\return     0 if initialization was successful

 \brief    This function intialize the Process Data Interface (PDI) and the host controller.
*////////////////////////////////////////////////////////////////////////////////////////
UINT8 HW_Init(void)
{
    UINT16 intMask;
	/*initialize the led and switch port*/
	GPIO_Config();
		/* initialize the SSP registers for the ESC SPI */
	SPI1_GPIO_Init();//改为SPI2

/*initialize ADC configration*/
		ADC_Configuration();

	do
    {
        intMask = 0x93;
        HW_EscWriteWord(intMask, ESC_AL_EVENTMASK_OFFSET);
        intMask = 0;
        HW_EscReadWord(intMask, ESC_AL_EVENTMASK_OFFSET);
    } while (intMask != 0x93);
		
		

		intMask = 0x00;
	  
    HW_EscWriteDWord(intMask, ESC_AL_EVENTMASK_OFFSET);

#if AL_EVENT_ENABLED
    INIT_ESC_INT;
    ENABLE_ESC_INT();
#endif

#if DC_SUPPORTED&& _STM32_IO8
    INIT_SYNC0_INT
    INIT_SYNC1_INT

    ENABLE_SYNC0_INT;
    ENABLE_SYNC1_INT;
#endif

    INIT_ECAT_TIMER;
    START_ECAT_TIMER;
  
	
#if INTERRUPTS_SUPPORTED
    /* enable all interrupts */
    ENABLE_GLOBAL_INT;
#endif



    return 0;
}



/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief    This function shall be implemented if hardware resources need to be release
        when the sample application stops
*////////////////////////////////////////////////////////////////////////////////////////
void HW_Release(void)
{

}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \return    first two Bytes of ALEvent register (0x220)

 \brief  This function gets the current content of ALEvent register
*////////////////////////////////////////////////////////////////////////////////////////
UINT16 HW_GetALEventRegister(void)
{
    GetInterruptRegister();
    return EscALEvent.Word;
}
#if INTERRUPTS_SUPPORTED
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \return    first two Bytes of ALEvent register (0x220)

 \brief  The SPI PDI requires an extra ESC read access functions from interrupts service routines.
        The behaviour is equal to "HW_GetALEventRegister()"
*////////////////////////////////////////////////////////////////////////////////////////
#if _STM32_IO4  && AL_EVENT_ENABLED
/* the pragma interrupt_level is used to tell the compiler that these functions will not
   be called at the same time from the main function and the interrupt routine */
//#pragma interrupt_level 1
#endif
UINT16 HW_GetALEventRegister_Isr(void)
{
     ISR_GetInterruptRegister();
    return EscALEvent.Word;
}
#endif


#if UC_SET_ECAT_LED
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \param RunLed            desired EtherCAT Run led state
 \param ErrLed            desired EtherCAT Error led state

  \brief    This function updates the EtherCAT run and error led
*////////////////////////////////////////////////////////////////////////////////////////
void HW_SetLed(UINT8 RunLed,UINT8 ErrLed)
{
#if _STM32_IO8
 //     LED_ECATGREEN = RunLed;
//      LED_ECATRED   = ErrLed;
#endif
}
#endif //#if UC_SET_ECAT_LED
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \param pData        Pointer to a byte array which holds data to write or saves read data.
 \param Address     EtherCAT ASIC address ( upper limit is 0x1FFF )    for access.
 \param Len            Access size in Bytes.

 \brief  This function operates the SPI read access to the EtherCAT ASIC.
*////////////////////////////////////////////////////////////////////////////////////////
void HW_EscRead( MEM_ADDR *pData, UINT16 Address, UINT16 Len )
{
    /* HBu 24.01.06: if the SPI will be read by an interrupt routine too the
                     mailbox reading may be interrupted but an interrupted
                     reading will remain in a SPI transmission fault that will
                     reset the internal Sync Manager status. Therefore the reading
                     will be divided in 1-byte reads with disabled interrupt */
    UINT16 i = Len;
    UINT8 *pTmpData = (UINT8 *)pData;

    /* loop for all bytes to be read */
    while ( i-- > 0 )
    {
			#if AL_EVENT_ENABLED
        /* the reading of data from the ESC can be interrupted by the
           AL Event ISR, in that case the address has to be reinitialized,
           in that case the status flag will indicate an error because
           the reading operation was interrupted without setting the last
           sent byte to 0xFF */
        DISABLE_AL_EVENT_INT;
#endif
         AddressingEsc( Address, ESC_RD );

        /* when reading the last byte the DI pin shall be 1 */
			*pTmpData++= WR_CMD(0xFF);
        /* enable the ESC interrupt to get the AL Event ISR the chance to interrupt,
           if the next byte is the last the transmission shall not be interrupted,
           otherwise a sync manager could unlock the buffer, because the last was
           read internally */
   #if AL_EVENT_ENABLED
        ENABLE_AL_EVENT_INT;
#endif
        /* there has to be at least 15 ns + CLK/2 after the transmission is finished
           before the SPI1_SEL signal shall be 1 */
        DESELECT_SPI;
        /* next address */
        Address++;
//        /* reset transmission flag */
//        SPI1_IF = 0;
    }
}
#if INTERRUPTS_SUPPORTED
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \param pData        Pointer to a byte array which holds data to write or saves read data.
 \param Address     EtherCAT ASIC address ( upper limit is 0x1FFF )    for access.
 \param Len            Access size in Bytes.

\brief  The SPI PDI requires an extra ESC read access functions from interrupts service routines.
        The behaviour is equal to "HW_EscRead()"
*////////////////////////////////////////////////////////////////////////////////////////
#if _STM32_IO4  && AL_EVENT_ENABLED
/* the pragma interrupt_level is used to tell the compiler that these functions will not
   be called at the same time from the main function and the interrupt routine */
//#pragma interrupt_level 1
#endif
void HW_EscReadIsr( MEM_ADDR *pData, UINT16 Address, UINT16 Len )
{
    UINT16 i = Len;
    UINT8 data = 0;

   UINT8 *pTmpData = (UINT8 *)pData;

    /* send the address and command to the ESC */
     ISR_AddressingEsc( Address, ESC_RD );
    /* loop for all bytes to be read */
    while ( i-- > 0 )
    {
        if ( i == 0 )
        {
            /* when reading the last byte the DI pin shall be 1 */
            data = 0xFF;
        }

		*pTmpData++= WR_CMD(data);
    }

    /* there has to be at least 15 ns + CLK/2 after the transmission is finished
       before the SPI1_SEL signal shall be 1 */
    DESELECT_SPI;
}
#endif //#if INTERRUPTS_SUPPORTED
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \param pData        Pointer to a byte array which holds data to write or saves write data.
 \param Address     EtherCAT ASIC address ( upper limit is 0x1FFF )    for access.
 \param Len            Access size in Bytes.

  \brief  This function operates the SPI write access to the EtherCAT ASIC.
*////////////////////////////////////////////////////////////////////////////////////////
void HW_EscWrite( MEM_ADDR *pData, UINT16 Address, UINT16 Len )
{
    UINT16 i = Len;
    VARVOLATILE UINT8 dummy;

    UINT8 *pTmpData = (UINT8 *)pData;

    /* loop for all bytes to be written */
    while ( i-- > 0 )
    {
   #if AL_EVENT_ENABLED
        /* the reading of data from the ESC can be interrupted by the
           AL Event ISR, so every byte will be written separate */
        DISABLE_AL_EVENT_INT;
#endif
        /* HBu 24.01.06: wrong parameter ESC_RD */
         AddressingEsc( Address, ESC_WR );

        /* enable the ESC interrupt to get the AL Event ISR the chance to interrupt */
        /* SPI1_BUF must be read, otherwise the module will not transfer the next received data from SPIxSR to SPIxRXB.*/
			dummy= WR_CMD(*pTmpData++);
			
    #if AL_EVENT_ENABLED
        ENABLE_AL_EVENT_INT;
#endif

        DESELECT_SPI;
        /* next address */
        Address++;
    }
}
#if INTERRUPTS_SUPPORTED
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \param pData        Pointer to a byte array which holds data to write or saves write data.
 \param Address     EtherCAT ASIC address ( upper limit is 0x1FFF )    for access.
 \param Len            Access size in Bytes.

 \brief  The SPI PDI requires an extra ESC write access functions from interrupts service routines.
        The behaviour is equal to "HW_EscWrite()"
*////////////////////////////////////////////////////////////////////////////////////////
#if _STM32_IO4  && AL_EVENT_ENABLED
/* the pragma interrupt_level is used to tell the compiler that these functions will not
   be called at the same time from the main function and the interrupt routine */
//#pragma interrupt_level 1
#endif
void HW_EscWriteIsr( MEM_ADDR *pData, UINT16 Address, UINT16 Len )
{
    UINT16 i = Len;
    VARVOLATILE UINT16 dummy;
    UINT8 *pTmpData = (UINT8 *)pData;

    /* send the address and command to the ESC */
     ISR_AddressingEsc( Address, ESC_WR );
    /* loop for all bytes to be written */
    while ( i-- > 0 )
    {
        /* start transmission */
			dummy= WR_CMD(*pTmpData);
      /* increment data pointer */
        pTmpData++;
    }

    /* there has to be at least 15 ns + CLK/2 after the transmission is finished
       before the SPI1_SEL signal shall be 1 */
    DESELECT_SPI;
}
#endif //#if INTERRUPTS_SUPPORTED


#if BOOTSTRAPMODE_SUPPORTED
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief    This function resets the hardware
*////////////////////////////////////////////////////////////////////////////////////////

void HW_RestartTarget(void)
{
}
#endif

#if ESC_EEPROM_EMULATION
/////////////////////////////////////////////////////////////////////////////////////////
/**
\return     0 if reload was successful

 \brief    This function is called when the master has request an EEPROM reload during EEPROM emulation

*////////////////////////////////////////////////////////////////////////////////////////
UINT16 HW_EepromReload (void)
{
    return 0;
}
#endif

#if AL_EVENT_ENABLED
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief    Interrupt service routine for the PDI interrupt from the EtherCAT Slave Controller
*////////////////////////////////////////////////////////////////////////////////////////

#if _STM32_IO4
/* the pragma interrupt_level is used to tell the compiler that these functions will not
   be called at the same time from the main function and the interrupt routine */
//#pragma interrupt_level 1

//interrupt
//void HWISR_EcatIsr(void)
void EcatIsr(void)
#else
void EcatIsr(void)		//void __attribute__ ((__interrupt__, no_auto_psv)) EscIsr(void)
#endif
{
			
     PDI_Isr();

    /* reset the interrupt flag */
		ACK_ESC_INT; 
}
#endif     // AL_EVENT_ENABLED







#if DC_SUPPORTED&& _STM32_IO8
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief    Interrupt service routine for the interrupts from SYNC0
*////////////////////////////////////////////////////////////////////////////////////////

void Sync0Isr(void)
{
    Sync0_Isr();
    /* reset the interrupt flag */

    ACK_SYNC0_INT;
}
/*ECATCHANGE_START(V5.10) HW3*/
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief    Interrupt service routine for the interrupts from SYNC1
*////////////////////////////////////////////////////////////////////////////////////////

void Sync1Isr(void)
{	
			Sync1_Isr();
			/* reset the interrupt flag */

			ACK_SYNC1_INT;
}
/*ECATCHANGE_END(V5.10) HW3*/
#endif

#if _STM32_IO8 && ECAT_TIMER_INT
// Timer 2 ISR (0.1ms)
void TimerIsr(void)
{
			DISABLE_ESC_INT();
		
		  ECAT_CheckTimer();

			ECAT_TIMER_ACK_INT;
		
			ENABLE_ESC_INT();
}

#endif

#endif //#if EL9800_HW
/** @} */




