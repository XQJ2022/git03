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
#define BUZZER_OFF 	PB -> OUTSET = (1 << 12)//PA12输出高电平
#define BUZZER_ON 	PB -> OUTCLR = (1 << 12)//PA12输出低电平

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

	
	PB_OUT_ENABLE(0);
	PB_OUT_ENABLE(1);
	PB_OUT_ENABLE(2);
	PB_OUT_ENABLE(3);
	PB_OUT_ENABLE(4);
	PB_OUT_ENABLE(5);
	PB_OUT_ENABLE(6);
	PB_OUT_ENABLE(7);
	
//	PB_OUT_ENABLE(8);
//	PB_OUT_ENABLE(9);
//	PB_OUT_ENABLE(10);

	while(1)
	{

		i = scan_MatrixKey();//读取键盘扫描函数返回值
		PB -> OUTEN |= 0X00FF;//PB输出使能
		
		
		if(1== i)		//按键1触发
		{	
//			PB_OUT_TOGGLE(0); 
//			PB_OUT_TOGGLE(4); 
			delay_ms(10);
		}
		else
		{	
//			PB_OUT_TOGGLE(0); 
//			PB_OUT_TOGGLE(4);
		}
	
		
		if(2== i)		//按键2触发
		{	
//			PB_OUT_TOGGLE(1); 
//			PB_OUT_TOGGLE(5); 
			delay_ms(10);
		}
		else
		{	
//			PB_OUT_TOGGLE(1); 
//			PB_OUT_TOGGLE(5);
		}
	

		if(3== i )		//按键3触发
		{	
//			PB_OUT_TOGGLE(2); 
//			PB_OUT_TOGGLE(6); 
			delay_ms(10);
		}
		else
		{	
//			PB_OUT_TOGGLE(2); 
//			PB_OUT_TOGGLE(6);
		}
		
		
		if(4 == i )		//按键4触发
		{	
//			PB_OUT_TOGGLE(3); 
//			PB_OUT_TOGGLE(7); 
			delay_ms(10);
		}
		else
		{	
//			PB_OUT_TOGGLE(3); 
//			PB_OUT_TOGGLE(7);
		}
		
		if(5 == i )	
		{
		delay_ms(10);
		}
		else
		{}
			
		if(6 == i )	
		{
		delay_ms(10);
		}
		else
		{}
			
		if(7 == i )	
		{}
		else
		{}
			
		if(8 == i )	
		{}
		else
		{}
			
		if(9 == i )	
		{
		delay_ms(10);
		}
		else
		{}
			
		if(10 == i )	
		{}
		else
		{}
			
		if(11 == i )	
		{}
		else
		{}
			
		if(12 == i )
		{}
		else
		{}
			
		if(13 == i )
		{
		delay_ms(10);
		}
		else
		{}
			
		if(14 == i )
		{}
		else
		{}
			
		if(15 == i )
		{}
		else
		{}
			
		if(16 == i )
		{}
		else
		{}
				
//		if(16 == i )	//按键D触发
//			{	BUZZER_ON;delay_ms(10);}
//		else
//			BUZZER_OFF;
//		

//		if(1== i)		//按键1触发
//		{	BUZZER_ON;delay_ms(10);}
//		else
//			BUZZER_OFF;
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

