# PLL Initialization for ARM Cortex-M4 - 80 MHz

### Initialization Process:
* Configuration of clock source as the main oscillator. 
* The USERCC2 bit is set, allowing the extended capabilities of the RCC2 register to be used while also providing a means to be backward-compatible to previous RCC options.
* To allow for additional frequency choices when using the PLL, the DIV400 bit is used. When DIV400 bit is set, SYSDIV2LSB the LSB for SYSDIV2. Must:  BYPASS2=0.
* PLL is enabled for 400 Mhz and with system devidor of value 5 to get 80 MHz frequency.