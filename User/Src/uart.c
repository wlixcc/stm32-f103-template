//
// Created by robot chef on 2019/12/2.
//

#include "uart.h"
#include "string.h"

HAL_StatusTypeDef uartPrint(UART_HandleTypeDef *huart, char _out[])
{
    return  HAL_UART_Transmit(huart, (uint8_t *) _out, strlen(_out), 10);
}

HAL_StatusTypeDef uartPrintln(UART_HandleTypeDef *huart, char _out[])
{
    HAL_StatusTypeDef type = HAL_UART_Transmit(huart, (uint8_t *) _out, strlen(_out), 100);
    if (type == HAL_OK) {
        char newline[1] = "\n";
        return HAL_UART_Transmit(huart, (uint8_t *) newline, 1, 100);
    }
    return type;
}
