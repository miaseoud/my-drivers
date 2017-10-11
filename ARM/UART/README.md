# AVR UART

### User settings as initialization function inputs:
* UART baud-rate
* System clock to adjust baud-rate associated registers
```````````````
void UART0_Init(int baud_rate,int clock)
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