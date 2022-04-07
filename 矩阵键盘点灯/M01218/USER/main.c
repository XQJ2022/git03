/**
	******************************************************************************
  * @file 	    main.c
  * @author 	  ������Ѹ�Ƽ����޹�˾
  * @version 		V2.0
  * @brief   		����OLEDʵ��
  ******************************************************************************                            
  * @attention
	*							PA4 	-> 	CS
	*							PA5 	-> 	D0
	*							PA6 	-> 	D1
	*							PA7 	-> 	DC
	*							PA8 	-> 	Reset
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include <SC32F5832.h>
#include <DevInit.h>
#include "delay.h"
#include <GPIO.h>
#include <LED.h>
#include <BEEP.h>
#include <KEY.h>
#include <OLED.h>
#include "keyboard4x4.h"

/*#define---------------------------------------------------------------------*/

/* Private functions declared ------------------------------------------------*/


int main()
{

	Device_Init();	//ϵͳ��ʼ��
	
	/*------------- PB ��8λ�˿����� -------------*/
	PB -> OUTEN |= 0X00FF;//PB���ʹ��
	
	//��ʼֵ: GPIOE ��8λ�˿� ��4λΪ��, ��4λΪ��
	PB -> OUT &= 0XFF00;
	PB -> OUT |= 0X00FF;
	
	//GPIOE ��8λ�˿� ��4λΪ ��������
	PB -> OUTEN &= 0XFF00;//PB����ʹ��
	GPIO_PUPD_SEL(PUPD_PU, PB, 0 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 1 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 2 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 3 );
										
	GPIO_PUPD_SEL(PUPD_PU, PB, 4 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 5 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 6 );
	GPIO_PUPD_SEL(PUPD_PU, PB, 7 );
	
	while(1)
	{

		;
		
	}
	
}
