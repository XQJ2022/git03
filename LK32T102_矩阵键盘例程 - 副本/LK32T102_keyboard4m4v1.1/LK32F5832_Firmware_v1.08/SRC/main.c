/**
* @file          : main.c
* @author        : Jerry01(R&D)
* @date          : 09/03/2019
* @brief         : This file is the main function.
* @version       : Ver. 1.1

* H/W Platform   : SL_FOC FOR MOTOR CONTROL

*------------------------------------------------------------------------------
 
* Compiler info  : Keil-MDK v5.24
 
*------------------------------------------------------------------------------
 
* Note: In this software, the function is used in motor control.

*------------------------------------------------------------------------------

*  History:  

*              mm/dd/yyyy ver. x.y.z author

*              mm1/dd1/yyyy1 ver. x.y.z author1

*------------------------------------------------------------------------------
* @attention
* THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, SLMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*
* THIS SOURCE CODE IS PROTECTED BY A LICENSE.
* FOR MORE INFORMATION PLEASE CAREFULLY READ THE LICENSE AGREEMENT FILE LOCATED
* IN THE ROOT DIRECTORY OF THIS FIRMWARE PACKAGE.

* <h2><center>&copy; COPYRIGHT 2019 SLMicroelectronics</center></h2>
*******************************************************************************
*/
/* Includes ------------------------------------------------------------------*/
#include <SC32F5832.h>
#include <DevInit.h>
#include "keyboard4x4.h"
/**
  * @brief      .
  * @param[in]  void : None.
  * @param[out] void : None.
  * @retval     None
  * @pre // 
  * @see // 
  * @par        Example:
  * -This example shows how to call the function:
  * @code
  * main();
  * @endcode
  * @warning:
*/
/*#define---------------------------------------------------------------------*/
#define BUZZER_OFF 	PB -> OUTSET = (1 << 12)//PA12����ߵ�ƽ
#define BUZZER_ON 	PB -> OUTCLR = (1 << 12)//PA12����͵�ƽ

/* Private variables ---------------------------------------------------------*/

/* Private functions declared ------------------------------------------------*/
void delay_ms( int );
void delay_us( int );
void _cror_( void );
void _crol_( void );

uint16_t i = 0,j = 0,k = 0,l = 0;

int main()
{
	
	Device_Init();	
	PB_OUT_ENABLE(12);//����������˿�ʹ��
	BUZZER_OFF;//�������ض�
	
	PA_OUT_ENABLE(0);
	PA_OUT_ENABLE(1);
	PA_OUT_ENABLE(2);
	PA_OUT_ENABLE(3);
	PA_OUT_ENABLE(4);
	PA_OUT_ENABLE(5);
	PA_OUT_ENABLE(6);
	PA_OUT_ENABLE(7);
	PA_OUT_ENABLE(8);
	PA_OUT_ENABLE(9);
	PA_OUT_ENABLE(10);
	
	
	while(1)
	{

		i = scan_MatrixKey();//��ȡ����ɨ�躯������ֵ
		
		if(1== i)		//����1����
		{	BUZZER_ON;delay_ms(10);}
		else
			BUZZER_OFF;
	
		
		if(2== i)		//����5����
			{	BUZZER_ON;delay_ms(10);}
	
		else
			BUZZER_OFF;
	

		if(3== i )		//����9����
			{	BUZZER_ON;delay_ms(10);}
		else
			BUZZER_OFF;
		
		if(4 == i )	//����D����
			{	BUZZER_ON;delay_ms(10);}
		else
			BUZZER_OFF;
				
		if(16 == i )	//����D����
			{	BUZZER_ON;delay_ms(10);}
		else
			BUZZER_OFF;
		

	}
	
}

void delay_us(int set_us_Times)
{
	int i,j;
	for(i = 0; i < set_us_Times; i++)
	{
		for(j = 0; j < 5; j++);
	}
}

void delay_ms(int set_ms_Times)
{
	int i = 1000;
	while( set_ms_Times-- )
	{
		while( i-- );
		i = 5000;
	}
}

