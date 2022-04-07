#ifndef __LED_H
#define __LED_H	

#include <SC32F5832.h>
#include <GPIO.h>

//��תLED
#define LED_TGL(x) 	PB_OUT_TOGGLE(x)		//��תָ��LED��  ��Χ 0~7 

//����LED
#define ON_LED(x) 	PB_OUT_LOW(x)		//����ָ��LED��  ��Χ 0~7 
#define LED1_ON 		PB_OUT_LOW(0)		//PB0 -D9  ����͵�ƽ LED1����
#define LED2_ON	 		PB_OUT_LOW(1)		//PB0 -D10 ����͵�ƽ LED1����
#define LED3_ON 		PB_OUT_LOW(2)		//PB0 -D11 ����͵�ƽ LED1����
#define LED4_ON 		PB_OUT_LOW(3)		//PB0 -D12 ����͵�ƽ LED1����
#define LED5_ON 		PB_OUT_LOW(4)		//PB0 -D14 ����͵�ƽ LED1����
#define LED6_ON 		PB_OUT_LOW(5)		//PB0 -D15 ����͵�ƽ LED1����
#define LED7_ON 		PB_OUT_LOW(6)		//PB0 -D16 ����͵�ƽ LED1����
#define LED8_ON 		PB_OUT_LOW(7)		//PB0 -D17 ����͵�ƽ LED1����

//Ϩ��LED
#define OFF_LED(x) 	PB_OUT_HIGH(x)		//Ϩ��ָ��LED��  ��Χ 0~7
#define LED1_OFF		PB_OUT_HIGH(0)		//PB0 -D9  ����͵�ƽ LED1����
#define LED2_OFF		PB_OUT_HIGH(1)		//PB0 -D10 ����͵�ƽ LED1����
#define LED3_OFF		PB_OUT_HIGH(2)		//PB0 -D11 ����͵�ƽ LED1����
#define LED4_OFF		PB_OUT_HIGH(3)		//PB0 -D12 ����͵�ƽ LED1����
#define LED5_OFF		PB_OUT_HIGH(4)		//PB0 -D14 ����͵�ƽ LED1����
#define LED6_OFF		PB_OUT_HIGH(5)		//PB0 -D15 ����͵�ƽ LED1����
#define LED7_OFF		PB_OUT_HIGH(6)		//PB0 -D16 ����͵�ƽ LED1����
#define LED8_OFF		PB_OUT_HIGH(7)		//PB0 -D17 ����͵�ƽ LED1����


void _crol_( void );	//ѭ��������ˮ��
void _cror_( void );	//ѭ��������ˮ��
void LED_init(void);	//LED��ʼ��

#endif
