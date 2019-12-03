//
// Created by robot chef on 2019/12/1.
//

#include "beep.h"

void beep_on(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
    HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_SET);
}

void beep_off(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
    HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_RESET);
}

void beep_toggle(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
    HAL_GPIO_TogglePin(GPIOx, GPIO_Pin);
}
