# AVR UART

### User settings including baud-rate in UART.h
* UART baud-rate
* System clock to adjust baud-rate associated registers
```````````````
void UART_init ()
```````````````
``````````````
void UART_Transmit(uint8_t);
``````````````
``````````````
uint8_t UART_Read() 
``````````````
``````````````
void UART_SendString (char*)
``````````````
``````````````
void UART_ReadString (char*) 