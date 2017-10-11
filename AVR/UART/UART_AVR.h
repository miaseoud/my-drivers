/*----------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------UART Driver AVR------------------------------------------------*/
/*----------------------------------------------------------------------------------------------------------------------*/
#ifndef UART_AVR_H_
#define UART_AVR_H_
#include <avr/io.h>
/*----------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------USER SETTINGS------------------------------------------------*/
/*----------------------------------------------------------------------------------------------------------------------*/
#define FOSC 4000000 //clk frequency
#define BAUD 9600 //UART baudrate selection
/*----------------------------------------------------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------------------------------------------------*/
#define UART_Println() UART_SendString("\r\n")

/*----------------------------------------------------------Functions declarations-----------------------------------------------*/
void UART_init ();
void UART_Transmit(uint8_t data);
uint8_t UART_Read() ;
void UART_SendString(char * str);
void UART_ReadString(char* str) ;
/*----------------------------------------------------------------------------------------------------------------------*/
#endif //UART_AVR_H_