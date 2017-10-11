# AVR ADC

## Initialization function 

````
void ADCx_Init (char ADC_channel)
````
* Selection of channel as input
* Voltage reference VCC
* Auto-trigger (Free running mode)
* Clk division factor=2

## Conversion function 
Starts a new conversion then waits until the process is complete and output 10 bits combined from 2 registers.
````
int getADC (void)
````