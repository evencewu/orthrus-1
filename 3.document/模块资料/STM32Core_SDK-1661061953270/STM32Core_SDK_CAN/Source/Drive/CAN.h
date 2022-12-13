#ifndef __CAN_H
#define __CAN_H
#include "stm32f10x_can.h"
#include "stdint.h"

void CAN_Mode_Init(uint32_t uiBaud);
void Can_Send_Msg(uint8_t ucStdId, uint8_t* msg, uint32_t len);



#endif

//------------------End of File----------------------------

