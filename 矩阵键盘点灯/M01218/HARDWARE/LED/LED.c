#include <SC32F5832.h>
#include <DevInit.h>
#include <LED.h>
#include "delay.h"
#include <GPIO.h>

/***************************************************************
						LED初始化
****************************************************************/
void LED_init(void)    
{
	//PB0 - PB7 -> LED1 - LED8  初始化IO口
	GPIO_AF_SEL(DIGITAL, PB, 0, 0);       // LED1 - D9
	GPIO_AF_SEL(DIGITAL, PB, 1, 0);       // LED2 - D10
	GPIO_AF_SEL(DIGITAL, PB, 2, 0);       // LED3 - D11
	GPIO_AF_SEL(DIGITAL, PB, 3, 0);       // LED4 - D12
	GPIO_AF_SEL(DIGITAL, PB, 4, 0);       // LED5 - D14
	GPIO_AF_SEL(DIGITAL, PB, 5, 0);       // LED6 - D15
	GPIO_AF_SEL(DIGITAL, PB, 6, 0);       // LED7 - D16
	GPIO_AF_SEL(DIGITAL, PB, 7, 0);       // LED8 - D17
	//IO口输出使能
	PB_OUT_ENABLE(0);	  
	PB_OUT_ENABLE(1);	  
	PB_OUT_ENABLE(2);	 
	PB_OUT_ENABLE(3);	 
	PB_OUT_ENABLE(4);	 
	PB_OUT_ENABLE(5);	 
	PB_OUT_ENABLE(6);	 
	PB_OUT_ENABLE(7);
  //关灯
	LED1_OFF;LED2_OFF;LED3_OFF;LED4_OFF;
	LED5_OFF;LED6_OFF;LED7_OFF;LED8_OFF;

}
/***************************************************************
						LED循环右移
****************************************************************/
void _cror_( void )
{
	//u8 PB_Value = 1;
	u8 i;
	
	for(i = 0; i <= 8; i++)
	{
		delay_ms(200);
		PB_OUT_ENABLE(i);	
		PB_OUT_LOW((i));
		
		delay_ms(200);
		PB_OUT_DISABLE(i);	
	}
}
/***************************************************************
						LED循环左移
****************************************************************/
void _crol_( void )
{
	//u8 PB_Value = 1;
	u8 i;
	
	for(i = 8; i >= 1; i--)
	{
		delay_ms(200);
		PB_OUT_ENABLE((i - 1));	
		PB_OUT_LOW((i - 1));	
		
		delay_ms(200);
		PB_OUT_DISABLE((i - 1));	
	}
}
