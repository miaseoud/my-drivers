/************************************************************************************************************/
/*-------------------------------------------------- AVR ADC Driver ----------------------------------------*/
/************************************************************************************************************/
#include "ADC.h"
#include <avr/io.h>
/*------------------------------- Initialize ADC Channel based on function input (0-3) ----------------------*/
void ADCx_Init (char ADC_channel) {
  ADCSRA |=  (ADEN) ; //ADC Enable
  ADMUX  &= ~ ( (1 << REFS0) | (1 << REFS1) | (1 << ADLAR)); //Voltage Reference: VCC
  ADMUX  |= ADC_channel;
  ADCSRB &= ~((1 << ADTS0) | (1 << ADTS1) | (1 << ADTS2)); //ADC Auto Trigger Source: Free Running Mode
  ADCSRA |= ( (ADPS0) | (ADPS1) | (ADPS2)  ); //clk division factor 2
  //ADCSRA |= ( (ADEN) | (ADIE) | (ADATE)  ); //ADC Enable + Interrupt
  //ADMUX  |= (1 << MUX0) | (2 << MUX0);  //ADC3 only
}
/***********************************************************************************************************/
/*----------------------------------------ADC Trigger and get value----------------------------------------*/
int getADC (void) {
  ADCSRA |= 1 << ADSC; //Start a new conversion
  while ( ADCSRA & (1 << ADSC)); // wait until conversion complete
  return (ADCL + ADCH * 256); //XCombine higher and lower bytes
}
/**********************************************************************************************************/
