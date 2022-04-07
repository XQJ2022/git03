#ifndef __LED_H
#define __LED_H	

#include <SC32F5832.h>
#include <GPIO.h>

//翻转LED
#define LED_TGL(x) 	PB_OUT_TOGGLE(x)		//翻转指定LED灯  范围 0~7 

//点亮LED
#define ON_LED(x) 	PB_OUT_LOW(x)		//点亮指定LED灯  范围 0~7 
#define LED1_ON 		PB_OUT_LOW(0)		//PB0 -D9  输出低电平 LED1点亮
#define LED2_ON	 		PB_OUT_LOW(1)		//PB0 -D10 输出低电平 LED1点亮
#define LED3_ON 		PB_OUT_LOW(2)		//PB0 -D11 输出低电平 LED1点亮
#define LED4_ON 		PB_OUT_LOW(3)		//PB0 -D12 输出低电平 LED1点亮
#define LED5_ON 		PB_OUT_LOW(4)		//PB0 -D14 输出低电平 LED1点亮
#define LED6_ON 		PB_OUT_LOW(5)		//PB0 -D15 输出低电平 LED1点亮
#define LED7_ON 		PB_OUT_LOW(6)		//PB0 -D16 输出低电平 LED1点亮
#define LED8_ON 		PB_OUT_LOW(7)		//PB0 -D17 输出低电平 LED1点亮

//熄灭LED
#define OFF_LED(x) 	PB_OUT_HIGH(x)		//熄灭指定LED灯  范围 0~7
#define LED1_OFF		PB_OUT_HIGH(0)		//PB0 -D9  输出低电平 LED1点亮
#define LED2_OFF		PB_OUT_HIGH(1)		//PB0 -D10 输出低电平 LED1点亮
#define LED3_OFF		PB_OUT_HIGH(2)		//PB0 -D11 输出低电平 LED1点亮
#define LED4_OFF		PB_OUT_HIGH(3)		//PB0 -D12 输出低电平 LED1点亮
#define LED5_OFF		PB_OUT_HIGH(4)		//PB0 -D14 输出低电平 LED1点亮
#define LED6_OFF		PB_OUT_HIGH(5)		//PB0 -D15 输出低电平 LED1点亮
#define LED7_OFF		PB_OUT_HIGH(6)		//PB0 -D16 输出低电平 LED1点亮
#define LED8_OFF		PB_OUT_HIGH(7)		//PB0 -D17 输出低电平 LED1点亮


void _crol_( void );	//循环左移流水灯
void _cror_( void );	//循环右移流水灯
void LED_init(void);	//LED初始化

#endif
