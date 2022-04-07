/**
  ******************************************************************************
  * @file   	系统滴答定时器精确延时/delay();
  * @author  	杭州朗迅科技有限公司
  * @version 	V2.0
  ******************************************************************************
  * @attention	
  *			SYSTICK 非中断方式实现精确延时 	SYSTICK时钟固定为HCLK的时钟1/8					
	*			选用内部时钟源72M 所以SYSTICK的时钟为9M 即SYSTICK定时器以9M的频率递减
	*			SysTick 主要包括CTRL LOAD VAL CALIB 4个寄存器
  ******************************************************************************
  */ 
/* Includes ------------------------------------------------------------------*/	
#include <DevInit.h>
#include "delay.h"
#include "CLK.h"


/*************************************************************************
					系统定时器us精确延时
*************************************************************************/
void delay_us( uint32_t nus )
{
	uint32_t temp;
	
	CHIPKEY_ENABLE;
	CHIPCTL -> CLKCFG1_b.SYSTICKSEL = 2;// systick时钟源选择rch16M的16分频

	SysTick -> LOAD = 1  * nus;	// 1Mhz下为1us
	SysTick -> VAL = 0x00ul;//清空计数器
	SysTick -> CTRL = 0x01ul;//使能 减到零是无动作 采用内部时钟源  
	
	do
	{
		temp = SysTick -> CTRL;//读取当前倒计数值
	}while( ( temp & 0x01 ) && ( ! ( temp & ( 1 << 16 ) ) ) );//等待时间到达
	
	SysTick -> CTRL = 0x00; //关闭计数器
	SysTick -> VAL = 0X00; //清空计数器
}
/*************************************************************************
					系统定时器ms精确延时
*************************************************************************/
void delay_ms( uint16_t nms )
{
	uint32_t temp;
	
	CHIPKEY_ENABLE;
	CHIPCTL -> CLKCFG1_b.SYSTICKSEL = 2;// systick时钟源选择rch16M的16分频
	
	SysTick -> LOAD = 1000 * nms;
	SysTick -> VAL = 0x00ul;//清空计数器
	SysTick -> CTRL = 0x01ul;//使能 减到零是无动作 采用内部时钟源  
	
	do
	{
		temp=SysTick -> CTRL;////读取当前倒计数值
	}while( ( temp & 0x01 ) && ( !( temp & ( 1 << 16 ) ) ) );//等待时间到达
	
	SysTick -> CTRL = 0x00; //关闭计数器
	SysTick -> VAL = 0X00; //清空计数器
}
