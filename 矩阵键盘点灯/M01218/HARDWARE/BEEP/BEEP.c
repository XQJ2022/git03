#include <SC32F5832.h>
#include <DevInit.h>
#include "delay.h"
#include <LED.h>
#include <GPIO.h>
#include <BEEP.h>


/***************************************************************
						��������ʼ��
****************************************************************/
void BUZ_init(void)     
{
	//������ -> PA12   ��ʼ��IO��
	GPIO_AF_SEL(DIGITAL, PA, 12, 0);  
	//ʹ�ܷ������ӿ�Ϊ���
	PA_OUT_ENABLE(12);	
	//�ط�����
	buzzer_off;
}
/***************************************************************
					������Ӧ��-----ϵͳ����ָʾ��
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
