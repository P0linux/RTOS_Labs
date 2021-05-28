#ifndef _MAIN_H
#define _MAIN_H

#include "stm32f10x.h"

#define TRUE 0x01
#define FALSE 0x00

void TIM2_PWM_Init(uint16_t period);
void initGPIO(void);
void SysTick_Init(void);
void ChangeSysTickStatus(void);
void incrTIM2PulseWidth(void);
char checkButtonClick(uint32_t pin);
void _delay_ms(uint32_t ms);

#endif /*_MAIN_H*/