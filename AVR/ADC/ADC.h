/************************************************************************************************************/
/*-------------------------------------------------- AVR ADC Driver ----------------------------------------*/
/************************************************************************************************************/
#ifndef ADC_H_
#define ADC_H_
#include <avr/io.h>
void ADCx_Init (char ADC_channel);
int getADC (void);
#endif //ADC_H_
