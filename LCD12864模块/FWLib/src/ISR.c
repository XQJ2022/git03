/************************************************************************************
	本文件展示了各个中断子程序的入口，相应模块的中断子程序可以在此编写
*************************************************************************************/

#include <SC32F5832.h>
#include <DevInit.h>

extern uint32_t ADCRESULT[16];

extern uint8_t run_led;
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
	ADC->ADCINTFLGCLR_b.ADCINT1 = 1;
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
	PWM0->ETCLR_b.INT = 1;   // PWM0
	
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
