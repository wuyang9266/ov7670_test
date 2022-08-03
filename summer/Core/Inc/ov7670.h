
#ifndef __OV7670_H_
#define __OV7670_H_

#include "stm32f1xx_hal.h"
			
#define OV7670_RRST_H   HAL_GPIO_WritePin(GPIOA,OV7670_FIFO_RRST_Pin,GPIO_PIN_SET)
#define OV7670_RRST_L   HAL_GPIO_WritePin(GPIOA,OV7670_FIFO_RRST_Pin,GPIO_PIN_RESET)
#define OV7670_RCK_H    HAL_GPIO_WritePin(GPIOB,OV7670_FIFO_RCK_Pin,GPIO_PIN_SET)
#define OV7670_RCK_L    HAL_GPIO_WritePin(GPIOB,OV7670_FIFO_RCK_Pin,GPIO_PIN_RESET)
#define OV7670_CS_H    HAL_GPIO_WritePin(GPIOB,GPIO_Pin_11,GPIO_PIN_SET)
#define OV7670_CS_L    HAL_GPIO_WritePin(GPIOB,GPIO_Pin_11,GPIO_PIN_RESET)
#define OV7670_WRST_H   HAL_GPIO_WritePin(GPIOA,OV7670_FIFO_WRST_Pin,GPIO_PIN_SET)
#define OV7670_WRST_L   HAL_GPIO_WritePin(GPIOA,OV7670_FIFO_WRST_Pin,GPIO_PIN_RESET)
#define OV7670_WEN_H   HAL_GPIO_WritePin(GPIOB,OV7670_FIFO_WR_Pin,GPIO_PIN_SET)
#define OV7670_WEN_L   HAL_GPIO_WritePin(GPIOB,OV7670_FIFO_WR_Pin,GPIO_PIN_RESET)

#define OV7670_DATA   (uint16_t)GPIOB->IDR 					//��������˿�
#define CHANGE_REG_NUM 							171			                    //��Ҫ���õļĴ�������		  
	    				 
extern uint8_t OV7670_Init(void);
extern void OV7670_Light_Mode(uint8_t mode);
extern void OV7670_Color_Saturation(uint8_t tone);
extern void OV7670_Brightness(uint8_t bright);
extern void OV7670_Contrast(uint8_t contrast);
extern void OV7670_Special_Effects(uint8_t effect);
extern void OV7670_Window_Set(uint16_t sx,uint16_t sy,uint16_t width,uint16_t height);

#endif /* INC_TEST_H_ */
