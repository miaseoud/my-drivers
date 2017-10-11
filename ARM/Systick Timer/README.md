## Systick Timer Initialization with ISR
SysTick is an RTOS tick timer, provides 24-bit clear-on-write counter and invokes a SysTick. 

### The timer consists of three registers (From datasheet):
* SysTick Control and Status (STCTRL): A control and status counter to configure its clock,
enable the counter, enable the SysTick interrupt, and determine counter status.
* SysTick Reload Value (STRELOAD): The reload value for the counter, used to provide the
counter's wrap value.
* SysTick Current Value (STCURRENT): The current value of the counter, any write clears "current" in STCURRENT.


### Initialization process:
* Determine clock source (Main), enable associated ISR, Disable Systick
* Clear current value
* Reload value
* Determine Interrupt priority 

`````
void SysTick_Init (void);
`````