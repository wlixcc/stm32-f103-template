//
// Created by robot chef on 2019/11/28.
//

#ifndef TEMPLATE_LED_H
#define TEMPLATE_LED_H

#include "stm32f1xx_hal.h"


void led_on(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void led_off(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void led_toggle(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

#endif //TEMPLATE_LED_H
