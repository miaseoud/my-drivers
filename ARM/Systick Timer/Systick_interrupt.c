/********************************************************************************************************************/
/*--------------------------------------------Systick Timer Initialization with Interrupt---------------------------*/
/********************************************************************************************************************/
#include "Systick_interrupt.h"
#include "REG.h"
	void SysTick_Init (long int ticks){
     /*SysTick Current Value Register (NVIC_ST_CTRL_R)
     1) Disable Systick
     2)Clock Source=System clock(80MHz)
     3)Interrupt Enable*/
     NVIC_ST_CTRL_R =0x0006; //Clock Source:System clock, Interrupt Enable, Disable timer.
     NVIC_ST_CURRENT_R = 0;        // any write to clear "current" in SysTick Current Value Register
     NVIC_ST_RELOAD_R = ticks-1;       //Initial Reload Value to SysTick Reload Value Register
     NVIC_SYS_PRI3_R = (NVIC_SYS_PRI3_R&0x00FFFFFF)|0x40000000; // Set priority 2
     NVIC_ST_CTRL_R =0x0007;      //Enable SystickTimer
}
/******************************************************************************************************/
