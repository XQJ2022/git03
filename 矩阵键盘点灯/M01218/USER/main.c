/**
	******************************************************************************
  * @file 	    main.c
  * @author 	  杭州朗迅科技有限公司
  * @version 		V2.0
  * @brief   		主板OLED实验
  ******************************************************************************                            
  * @attention
	*							PA4 	-> 	CS
	*							PA5 	-> 	D0
	*							PA6 	-> 	D1
	*							PA7 	-> 	DC
	*							PA8 	-> 	Reset
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include <SC32F5832.h>
#include <DevInit.h>
#include "delay.h"
#include <GPIO.h>
#include <LED.h>
#include <BEEP.h>
#include <KEY.h>
#include <OLED.h>
#include "keyboard4x4.h"

/*#define---------------------------------------------------------------------*/

/* Private functions declared ------------------------------------------------*/


int main()
{

	Device_Init();	//系统初始化
	
	/*------------- PB 高8位端口配置 -------------*/
	PB -> OUTEN |= 0X00FF;//PB输出使能
	
	//初始值: GPIOE 高8位端口 低4位为低, 高4位为高
	PB -> OUT &= 0XFF00;
	PB -> OUT |= 0X00FF;
	
	//GPIOE 高8位端口 高4位为 上拉输入
	PB -> OUTEN &= 0XFF00;//PB输入使能
	GPIO_PUPD_SEL(PUPD_PU, PB, 0 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 1 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 2 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 3 );
										
	GPIO_PUPD_SEL(PUPD_PU, PB, 4 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 5 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 6 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 7 );
	
	while(1)
	{

		;
		
	}
	
}
