#include <SC32F5832.h>
#include <DevInit.h>
#include "delay.h"
#include "CLK.h"
#include <KEY.h>
#include "LCD12864.h"
/***************************************************************
						系统初始化
****************************************************************/
void Device_Init()
{
	
	SysCLK_Init();	//系统时钟初始化
	KEY_init();			//主板按键初始化
	lcd_init();			//LCD初始化
}
