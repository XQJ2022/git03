#include <SC32F5832.h>
#include <DevInit.h>
#include "delay.h"
#include "CLK.h"
#include <LED.h>
#include <KEY.h>
#include <BEEP.h>
#include <OLED.h>

/***************************************************************
						系统初始化
****************************************************************/
void Device_Init()
{
	
	SysCLK_Init();	//系统时钟初始化
	LED_init();			//LED初始化
//	BUZ_init();			//蜂鸣器初始化
	KEY_init();			//主板按键初始化
	OLED_Init();		//初始化OLED-SSD1306
	GPIO_Init();
	
}
