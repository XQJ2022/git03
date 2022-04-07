/**
* @file          : ISR.c
* @author        : Motor Lab 
* @date          : 24/04/2018
* @brief         : This file is for ISR configuration.
* @version       : Ver. 1.01

* H/W Platform   : SL_FOC FOR MOTOR CONTROL

*------------------------------------------------------------------------------
 
* Compiler info  : Keil v5.20
 
*------------------------------------------------------------------------------
 
* Note: In this software, the function is used in motor control.

*------------------------------------------------------------------------------

*  History:  

*            

*              17/11/2017  Motor Lab   Ver.1.00

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

* <h2><center>&copy; COPYRIGHT 2017 SLMicroelectronics</center></h2>
*******************************************************************************
*/

/************************************************************************************
	本文件展示了各个中断子程序的入口，相应模块的中断子程序可以在此编写
*************************************************************************************/

#include <SC32F5832.h>
#include <DevInit.h>

extern uint32_t ADCRESULT[16];
extern void delay_ms(int);

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
  * Reset_Handler();
  * @endcode
  * @warning:
*/

/*void Reset_Handler()
{
	
}*/
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
  * NMI_Handler();
  * @endcode
  * @warning:
*/

void NMI_Handler()
{
	
}
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
  * HardFault_Handler();
  * @endcode
  * @warning:
*/

void HardFault_Handler()
{
	
}
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
  * SVC_Handler();
  * @endcode
  * @warning:
*/

void SVC_Handler()
{
	
}
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
  * PendSV_Handler();
  * @endcode
  * @warning:
*/

void PendSV_Handler()
{
	
}
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
  * SysTick_Handler();
  * @endcode
  * @warning:
*/

void SysTick_Handler()
{

}
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
  * SPI0_IRQHandler();
  * @endcode
  * @warning:
*/

void SPI0_IRQHandler()
{
	
}
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
  * TIMER0_IRQHandler();
  * @endcode
  * @warning:
*/

void TIMER0_IRQHandler()
{

	TIMER0->TIM_SR_b.CC1IF =1;

	TIMER0->TIM_SR_b.CC2IF =1;

	TIMER0->TIM_SR_b.CC3IF =1;

	TIMER0->TIM_SR_b.CC1OF = 1;

	TIMER0->TIM_SR_b.CC2OF = 1;

	TIMER0->TIM_SR_b.CC3OF = 1;

}
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
  * TIM6_T0_IRQHandler();
  * @endcode
  * @warning:
*/

void TIM6_T0_IRQHandler()
{
	TIM6 -> CTC0_b.COUNT0INT_EN = 0;
	
	PB_OUT_ENABLE(7);
	PB_OUT_LOW(7);		
	//		PA_OUT_TOGGLE(12);
	delay_ms(50);
	PB_OUT_HIGH(7);	
	PB_OUT_DISABLE(7);	
	
	TIM6 -> CTC0_b.COUNTFW = 0;
//	TIM6 -> COUNT0 = 0;
//	NVIC_ClearPendingIRQ(TIM6_T0_IRQn);//清除中断
	
	TIM6 -> CTC0_b.COUNT0INT_EN = 1;
}
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
  * TIM6_T1_IRQHandler();
  * @endcode
  * @warning:
*/

void TIM6_T1_IRQHandler()
{
	
}
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
  * DMA_IRQHandler();
  * @endcode
  * @warning:
*/

void DMA_IRQHandler()
{
	
}
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
  * COPROC_IRQHandler();
  * @endcode
  * @warning:
*/

void COPROC_IRQHandler()
{
	
}
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
  * SYS_IRQHandler();
  * @endcode
  * @warning:
*/

void SYS_IRQHandler()
{
	
}
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
  * WWDT_IRQHandler();
  * @endcode
  * @warning:
*/

void WWDT_IRQHandler()
{
	
}
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
  * IWDT_IRQHandler();
  * @endcode
  * @warning:
*/

void IWDT_IRQHandler()
{
	
}
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
  * GPIO0_IRQHandler();
  * @endcode
  * @warning:
*/

void GPIO0_IRQHandler()
{
//	if(!(PA -> PIN & (1 << 10)))//判断按键SB3是否按下
//	{
//		PA_OUT_ENABLE(12);
//		PA_OUT_LOW(12);		
////		PA_OUT_TOGGLE(12);
//		delay_ms(200);
//		PA_OUT_HIGH(12);	
//		PA_OUT_DISABLE(12);	
//	}
//	NVIC_ClearPendingIRQ(PA_IRQn);//清除中断
//	PA_INT_FLAG_CLR(10);//清除中断标志
//	
}
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
  * GPIO1_IRQHandler();
  * @endcode
  * @warning:
*/

void GPIO1_IRQHandler()
{
	
}
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
  * GPIO2_IRQHandler();
  * @endcode
  * @warning:
*/

void GPIO2_IRQHandler()
{
	
}
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
  * ADC0_IRQHandler();
  * @endcode
  * @warning:
*/

void ADC0_IRQHandler()
{
	
}
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
  * ADC1_IRQHandler();
  * @endcode
  * @warning:
*/

void ADC1_IRQHandler()
{
	
}
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
  * ADC2_IRQHandler();
  * @endcode
  * @warning:
*/

void ADC2_IRQHandler()
{
	
}
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
  * ADC_IRQHandler();
  * @endcode
  * @warning:
*/

void ADC_IRQHandler()
{
//	ADC->ADCINTFLGCLR_b.ADCINT1 = 1;
}
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
  * PWM0_IRQHandler();
  * @endcode
  * @warning:
*/

void PWM0_IRQHandler()
{
//	PWM0->ETCLR_b.INT = 1;   // PWM0
	
}
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
  * PWM4_IRQHandler();
  * @endcode
  * @warning:
*/

void PWM4_IRQHandler()
{
	
}
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
  * PWM_COMB_IRQHandler();
  * @endcode
  * @warning:
*/

void PWM_COMB_IRQHandler()
{
	
}
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
  * ACMP_OPA_IRQHandler();
  * @endcode
  * @warning:
*/
void ACMP_OPA_IRQHandler()
{
	
}

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
  * ERU0_IRQHandler();
  * @endcode
  * @warning:
*/
void ERU0_IRQHandler()
{
	
}
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
  * ERU1_IRQHandler();
  * @endcode
  * @warning:
*/

void ERU1_IRQHandler()
{
	
}
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
  * ERU2_IRQHandler();
  * @endcode
  * @warning:
*/

void ERU2_IRQHandler()
{
	
}
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
  * ERU3_IRQHandler();
  * @endcode
  * @warning:
*/

void ERU3_IRQHandler()
{
	
}
