#include <SC32F5832.h>
#include <DevInit.h>
#include "delay.h"
#include <LED.h>
#include <GPIO.h>
#include <BEEP.h>


/***************************************************************
						蜂鸣器初始化
****************************************************************/
void BUZ_init(void)     
{
	//蜂鸣器 -> PA12   初始化IO口
	GPIO_AF_SEL(DIGITAL, PA, 12, 0);  
	//使能蜂鸣器接口为输出
	PA_OUT_ENABLE(12);	
	//关蜂鸣器
	buzzer_off;
}
/***************************************************************
					蜂鸣器应用-----系统运行指示器
****************************************************************/
void SysRun_Hint(void)
{
		BUZ_ON;
		LED1_ON;
		delay_ms(250);
		BUZ_OFF;
		LED1_OFF;
		delay_ms(200);
		
		BUZ_ON;
		LED1_ON;
		delay_ms(250);
		BUZ_OFF;
		LED1_OFF;
		delay_ms(200);
		
		BUZ_ON;
		LED1_ON;
		delay_ms(250);
		BUZ_OFF;
		LED1_OFF;
		delay_ms(200);
		
		BUZ_ON;
		LED1_ON;
		delay_ms(100);
		BUZ_OFF;
		LED1_OFF;
		delay_ms(100);
		
		BUZ_ON;
		LED1_ON;
		delay_ms(100);
		BUZ_OFF;
		LED1_OFF;
		delay_ms(10000);
}
