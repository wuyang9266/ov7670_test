/*
 * usart.h
 *
 *  Created on: Aug 1, 2022
 *      Author: shensy
 */

#ifndef INC_USART_H_
#define INC_USART_H_

#include <string.h>
#include "main.h"

#define RxBufferSize 256

char RxBuffer[RxBufferSize];
uint8_t aRxBuffer;
uint8_t Uart1_Rx_Cnt = 0;//接收缓冲计数

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);

#endif /* INC_USART_H_ */
