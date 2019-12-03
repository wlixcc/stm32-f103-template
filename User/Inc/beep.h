//
// Created by robot chef on 2019/12/1.
//

#ifndef TEMPLATE_BEEP_H
#define TEMPLATE_BEEP_H


#include "stm32f1xx_hal.h"

void beep_on(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void beep_off(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void beep_toggle(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

#endif //TEMPLATE_BEEP_H
