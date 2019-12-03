//
// Created by robot chef on 2019/12/2.
//

#ifndef TEMPLATE_UART_H
#define TEMPLATE_UART_H
#include "stm32f1xx_hal.h"

HAL_StatusTypeDef uartPrint(UART_HandleTypeDef *huart, char _out[]);
HAL_StatusTypeDef uartPrintln(UART_HandleTypeDef *huart, char _out[]);

#endif //TEMPLATE_UART_H
