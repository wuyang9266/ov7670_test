#ifndef _DELAY_H
#define _DELAY_H

#include "stm32f1xx_hal.h"

//΢�������ʱ����
__STATIC_INLINE void sw_delay_us(uint32_t number_of_us);
//���������ʱ����
__STATIC_INLINE void sw_delay_ms(uint32_t number_of_ms);

__STATIC_INLINE void sw_delay_us(uint32_t number_of_us)
{

	 uint32_t temp;
	 SysTick->LOAD = HAL_RCC_GetSysClockFreq()/1000000/8*number_of_us;
	 SysTick->VAL=0X00;//清空计数器
	 SysTick->CTRL=0X01;//使能，减到零是无动作，采用外部时钟源
	 do
	 {
		 temp=SysTick->CTRL;//读取当前倒计数值
	 }while((temp&0x01)&&(!(temp&(1<<16))));//等待时间到达
	 SysTick->CTRL=0x00; //关闭计数器
	 SysTick->VAL =0X00; //清空计数器

}
__STATIC_INLINE void sw_delay_ms(uint32_t number_of_ms)
{
	uint32_t temp;
	SysTick->LOAD = HAL_RCC_GetSysClockFreq()/1000/8*number_of_ms;
	SysTick->VAL=0X00;//清空计数器
	SysTick->CTRL=0X01;//使能，减到零是无动作，采用外部时钟源
	do
	{
		temp=SysTick->CTRL;//读取当前倒计数值
	}while((temp&0x01)&&(!(temp&(1<<16))));//等待时间到达
	SysTick->CTRL=0x00; //关闭计数器
	SysTick->VAL =0X00; //清空计数器
}


#endif

