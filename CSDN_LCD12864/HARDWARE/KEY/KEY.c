#include <SC32F5832.h>
#include <DevInit.h>
#include <KEY.h>
#include "delay.h" 
#include <LED.h>
#include <BEEP.h>

uint16_t Key_TrgValue;
uint16_t Key_ContValue;

/***************************************************************
						���尴����ʼ��
****************************************************************/
void KEY_init(void)
{
	//���� PA0 -> S2 PA1 -> S3 PA10 -> S4 PA11 -> SB5
	GPIO_AF_SEL(DIGITAL, PA, 0, 0);       // ����S2
	GPIO_AF_SEL(DIGITAL, PA, 1, 0);       // ����S3
	GPIO_AF_SEL(DIGITAL, PA, 10, 0);      // ����S4
	GPIO_AF_SEL(DIGITAL, PA, 11, 0);      // ����S5
	
	//�����˿����� ����
	GPIO_PUPD_SEL(PUPD_PU, PA, 0 );
	GPIO_PUPD_SEL(PUPD_PU, PA, 1 );
	GPIO_PUPD_SEL(PUPD_PU, PA, 10 );
	GPIO_PUPD_SEL(PUPD_PU, PA, 11 );
	
	//IO������ʹ��	
	PA_OUT_DISABLE(0);	  
	PA_OUT_DISABLE(1);	  
	PA_OUT_DISABLE(10);	 
	PA_OUT_DISABLE(11);

}

/***************************************************************
						���尴�����ƺ���
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
		
		_cror_();
	}

	if(S5 == 1)
	{
		_crol_();
	}	
}

/***************************************************************
						���尴��S2��S3��s4��s5ɨ��
****************************************************************/
void Key_ReadSta_Task(void)
{	
	uint16_t ReadKey_Data = 0; 
	
	ReadKey_Data = (PA -> PIN) ^ 0x0c03;//��ȡ������������
	ReadKey_Data &= 0x0c03;		//��ԭ��ֵȡ��
	Key_TrgValue = ReadKey_Data & ( ReadKey_Data ^ Key_ContValue );	//�����ֵ
	Key_ContValue = ReadKey_Data;		//�����ֵ��Ϊ�����ɿ���־
}
