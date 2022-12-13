#ifndef __UART1_H
#define __UART1_H


void Initial_UART1(unsigned long baudrate);
void UART1_Put_Char(unsigned char DataToSend);
unsigned char UART1_Get_Char(void);
void UART1_Put_String(unsigned char *Str);
#endif

//------------------End of File----------------------------

