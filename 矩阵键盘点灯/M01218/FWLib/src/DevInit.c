#include <SC32F5832.h>
#include <DevInit.h>
#include "delay.h"
#include "CLK.h"
#include <LED.h>
#include <KEY.h>
#include <BEEP.h>
#include <OLED.h>

/***************************************************************
						ϵͳ��ʼ��
****************************************************************/
void Device_Init()
{
	
	SysCLK_Init();	//ϵͳʱ�ӳ�ʼ��
	LED_init();			//LED��ʼ��
//	BUZ_init();			//��������ʼ��
	KEY_init();			//���尴����ʼ��
	OLED_Init();		//��ʼ��OLED-SSD1306
	GPIO_Init();
	
}
