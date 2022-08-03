#ifndef __SCCB_H_
#define __SCCB_H_

#include "stm32f1xx_hal.h"
#include "main.h"

#define SCCB_SDA_L  HAL_GPIO_WritePin(GPIOB,OV7670_SIO_D_Pin,GPIO_PIN_RESET)
#define SCCB_SDA_H  HAL_GPIO_WritePin(GPIOB,OV7670_SIO_D_Pin,GPIO_PIN_SET)

#define SCCB_SCL_L  HAL_GPIO_WritePin(GPIOB,OV7670_SIO_C_Pin,GPIO_PIN_RESET)
#define SCCB_SCL_H  HAL_GPIO_WritePin(GPIOB,OV7670_SIO_C_Pin,GPIO_PIN_SET)

#define SCCB_Read_SDA  (HAL_GPIO_ReadPin(GPIOB, OV7670_SIO_D_Pin) == 1)

#define OV7670_ID   			0x42  

extern void SCCB_GPIO_Init(void);
extern void SCCB_Start(void);
extern void SCCB_Stop(void);
extern void SCCB_No_Ack(void);
extern uint8_t SCCB_WriteAbyte(uint8_t dat);
extern uint8_t SCCB_ReadAbyte(void);
extern uint8_t SCCB_Write_Reg(uint8_t reg,uint8_t data);
extern uint8_t SCCB_Read_Reg(uint8_t reg);


#endif







