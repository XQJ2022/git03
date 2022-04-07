#include <SC32F5832.h>
#include <DevInit.h>
#include <KEY.h>
#include "delay.h" 
#include <LED.h>
#include <BEEP.h>

uint16_t Key_TrgValue;
uint16_t Key_ContValue;

/***************************************************************
						主板按键初始化
****************************************************************/
void KEY_init(void)
{
	//按键 PA0 -> S2 PA1 -> S3 PA10 -> S4 PA11 -> SB5
	GPIO_AF_SEL(DIGITAL, PA, 0, 0);       // 按键S2
	GPIO_AF_SEL(DIGITAL, PA, 1, 0);       // 按键S3
	GPIO_AF_SEL(DIGITAL, PA, 10, 0);      // 按键S4
	GPIO_AF_SEL(DIGITAL, PA, 11, 0);      // 按键S5
	
	//按键端口配置 浮空
	GPIO_PUPD_SEL(PUPD_PU, PA, 0 );
	GPIO_PUPD_SEL(PUPD_PU, PA, 1 );
	GPIO_PUPD_SEL(PUPD_PU, PA, 10 );
	GPIO_PUPD_SEL(PUPD_PU, PA, 11 );
	
	//IO口输入使能	
	PA_OUT_DISABLE(0);	  
	PA_OUT_DISABLE(1);	  
	PA_OUT_DISABLE(10);	 
	PA_OUT_DISABLE(11);

}

/***************************************************************
						主板按键控制函数
****************************************************************/
void Key_Ctrl(void)
{
	Key_ReadSta_Task();
	
	if(S2 == 1)	
	{
		LED_TGL(0);
	}
		
	if(S3 == 1)	
	{
		BUZ_TGL;
	}

	if(S4 == 1)
	{
		LED_TGL(2);
		LED_TGL(3);
	}

	if(S5 == 1)
	{
		LED_TGL(4);
		LED_TGL(5);
		LED_TGL(6);
	}	
}

/***************************************************************
						主板按键S2、S3、s4、s5扫描
****************************************************************/
void Key_ReadSta_Task(void)
{	
	uint16_t ReadKey_Data = 0; 
	
	ReadKey_Data = (PA -> PIN) ^ 0x0c03;//读取按键输入数据
	ReadKey_Data &= 0x0c03;		//将原键值取反
	Key_TrgValue = ReadKey_Data & ( ReadKey_Data ^ Key_ContValue );	//保存键值
	Key_ContValue = ReadKey_Data;		//保存键值作为按键松开标志
}
