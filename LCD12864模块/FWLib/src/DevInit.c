#include <SC32F5832.h>
#include <DevInit.h>
#include "delay.h"
#include "CLK.h"
#include <KEY.h>
#include "LCD12864.h"
/***************************************************************
						ϵͳ��ʼ��
****************************************************************/
void Device_Init()
{
	
	SysCLK_Init();	//ϵͳʱ�ӳ�ʼ��
	KEY_init();			//���尴����ʼ��
	lcd_init();			//LCD��ʼ��
}
