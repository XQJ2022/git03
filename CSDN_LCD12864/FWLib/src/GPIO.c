/****************************************************************************
			���ļ�չʾ��GPIO�ĸ��ù���ѡ��
*****************************************************************************/

#include <SC32F5832.h>
#include <DevInit.h>
#include <GPIO.h>

/**
  * @brief      .
  * @param[in]  void : AD,PA_GPIOx,gpiopin,fun_num
  * @param[out] void : None.
  * @retval     None
  * @pre // 
  * @see // 
  * @par        Example:
  * -This example shows how to call the function:
  * @code
  * GPIO_AF_SEL(uint8_t AD,PA_Type* GPIOx,uint8_t gpiopin,uint8_t fun_num)
  * @endcode
  * @warning:
*/

void GPIO_AF_SEL(uint8_t AD,PA_Type* GPIOx,uint8_t gpiopin,uint8_t fun_num)
{
	uint32_t tmp;
	
	switch (gpiopin)
	{
		case 0x00:
			tmp=GPIOx->CFG0 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG0 =tmp|fun_num|AD;
			break;
		
		case 0x01:
			tmp=GPIOx->CFG1 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG1 =tmp|fun_num|AD;
			break;
		
		case 0x02:
			tmp=GPIOx->CFG2 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG2 =tmp|fun_num|AD;
			break;
		
		case 0x03:
			tmp=GPIOx->CFG3 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG3 =tmp|fun_num|AD;
			break;
		
		case 0x04:
			tmp=GPIOx->CFG4 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG4 =tmp|fun_num|AD;
			break;
		
		case 0x05:
			tmp=GPIOx->CFG5 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG5 =tmp|fun_num|AD;
			break;
		
		case 0x06:
			tmp=GPIOx->CFG6 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG6 =tmp|fun_num|AD;
			break;
		
		case 0x07:
			tmp=GPIOx->CFG7 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG7 =tmp|fun_num|AD;
			break;
		
		case 0x08:
			tmp=GPIOx->CFG8 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG8 =tmp|fun_num|AD;
			break;
		
		case 0x09:
			tmp=GPIOx->CFG9 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG9 =tmp|fun_num|AD;
			break;
		
		case 0x0a:
			tmp=GPIOx->CFG10 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG10 =tmp|fun_num|AD;
			break;
		
		case 0x0b:
			tmp=GPIOx->CFG11 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG11 =tmp|fun_num|AD;
			break;
		
		case 0x0c:
			tmp=GPIOx->CFG12 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG12 =tmp|fun_num|AD;
			break;
		
		case 0x0d:
			tmp=GPIOx->CFG13 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG13 =tmp|fun_num|AD;
			break;
		
		case 0x0e:
			tmp=GPIOx->CFG14 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG14 =tmp|fun_num|AD;
			break;
		
		case 0x0f:
			tmp=GPIOx->CFG15 &=0xffffffe8ul;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG15 =tmp|fun_num|AD;
			break;
		
		default:
			break;
	}
}
/**
  * @brief      .
  * @param[in]  void : OD,PA_GPIOx,gpiopin
  * @param[out] void : None.
  * @retval     None
  * @pre // 
  * @see // 
  * @par        Example:
  * -This example shows how to call the function:
  * @code
  * GPIO_OD_SEL(uint8_t OD,PA_Type* GPIOx,uint8_t gpiopin)
  * @endcode
  * @warning:
*/

/*****************************************************************************************
																	��©ģʽʹ��/��ֹ
*****************************************************************************************/
void GPIO_OD_SEL(uint8_t OD,PA_Type* GPIOx,uint8_t gpiopin)
{
	uint32_t tmp;
	
	switch (gpiopin)
	{
		case 0x00:
			tmp=GPIOx->CFG0 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG0 =tmp|OD;
			break;
		
		case 0x01:
			tmp=GPIOx->CFG1 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG1 =tmp|OD;
			break;
		
		case 0x02:
			tmp=GPIOx->CFG2 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG2 =tmp|OD;
			break;
		
		case 0x03:
			tmp=GPIOx->CFG3 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG3 =tmp|OD;
			break;
		
		case 0x04:
			tmp=GPIOx->CFG4 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG4 =tmp|OD;
			break;
		
		case 0x05:
			tmp=GPIOx->CFG5 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG5 =tmp|OD;
			break;
		
		case 0x06:
			tmp=GPIOx->CFG6 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG6 =tmp|OD;
			break;
		
		case 0x07:
			tmp=GPIOx->CFG7 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG7 =tmp|OD;
			break;
		
		case 0x08:
			tmp=GPIOx->CFG8 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG8 =tmp|OD;
			break;
		
		case 0x09:
			tmp=GPIOx->CFG9 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG9 =tmp|OD;
			break;
		
		case 0x0a:
			tmp=GPIOx->CFG10 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG10 =tmp|OD;
			break;
		
		case 0x0b:
			tmp=GPIOx->CFG11 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG11 =tmp|OD;
			break;
		
		case 0x0c:
			tmp=GPIOx->CFG12 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG12 =tmp|OD;
			break;
		
		case 0x0d:
			tmp=GPIOx->CFG13 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG13 =tmp|OD;
			break;
		
		case 0x0e:
			tmp=GPIOx->CFG14 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG14 =tmp|OD;
			break;
		
		case 0x0f:
			tmp=GPIOx->CFG15 &=0xffffdffful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG15 =tmp|OD;
			break;
		
		default:
			break;
	}
}
/**
  * @brief      .
  * @param[in]  void : DRV,PA_GPIOx,gpiopin
  * @param[out] void : None.
  * @retval     None
  * @pre // 
  * @see // 
  * @par        Example:
  * -This example shows how to call the function:
  * @code
  * GPIO_DRV_SEL(uint8_t DRV,PA_Type* GPIOx,uint8_t gpiopin)
  * @endcode
  * @warning:
*/

/**********************************************************************************
															��/������ģʽѡ��
**********************************************************************************/
void GPIO_DRV_SEL(uint8_t DRV,PA_Type* GPIOx,uint8_t gpiopin)
{
	uint32_t tmp;
	
	switch (gpiopin)
	{
		case 0x00:
			tmp=GPIOx->CFG0 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG0 =tmp|DRV;
			break;
		
		case 0x01:
			tmp=GPIOx->CFG1 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG1 =tmp|DRV;
			break;
		
		case 0x02:
			tmp=GPIOx->CFG2 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG2 =tmp|DRV;
			break;
		
		case 0x03:
			tmp=GPIOx->CFG3 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG3 =tmp|DRV;
			break;
		
		case 0x04:
			tmp=GPIOx->CFG4 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG4 =tmp|DRV;
			break;
		
		case 0x05:
			tmp=GPIOx->CFG5 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG5 =tmp|DRV;
			break;
		
		case 0x06:
			tmp=GPIOx->CFG6 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG6 =tmp|DRV;
			break;
		
		case 0x07:
			tmp=GPIOx->CFG7 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG7 =tmp|DRV;
			break;
		
		case 0x08:
			tmp=GPIOx->CFG8 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG8 =tmp|DRV;
			break;
		
		case 0x09:
			tmp=GPIOx->CFG9 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG9 =tmp|DRV;
			break;
		
		case 0x0a:
			tmp=GPIOx->CFG10 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG10 =tmp|DRV;
			break;
		
		case 0x0b:
			tmp=GPIOx->CFG11 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG11 =tmp|DRV;
			break;
		
		case 0x0c:
			tmp=GPIOx->CFG12 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG12 =tmp|DRV;
			break;
		
		case 0x0d:
			tmp=GPIOx->CFG13 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG13 =tmp|DRV;
			break;
		
		case 0x0e:
			tmp=GPIOx->CFG14 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG14 =tmp|DRV;
			break;
		
		case 0x0f:
			tmp=GPIOx->CFG15 &=0xfffffbfful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG15 =tmp|DRV;
			break;
		
		default:
			break;
	}
}
/**
  * @brief      .
  * @param[in]  void : PUPD,PA_GPIOx,gpiopin
  * @param[out] void : None.
  * @retval     None
  * @pre // 
  * @see // 
  * @par        Example:
  * -This example shows how to call the function:
  * @code
  * GPIO_PUPD_SEL(uint8_t PUPD,PA_Type* GPIOx,uint8_t gpiopin)
  * @endcode
  * @warning:
*/

/**********************************************************************************
															��/����ѡ��
**********************************************************************************/

void GPIO_PUPD_SEL(uint8_t PUPD,PA_Type* GPIOx,uint8_t gpiopin)
{
	uint32_t tmp;
	
	switch (gpiopin)
	{
		case 0x00:
			tmp=GPIOx->CFG0 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG0 =tmp|PUPD;
			break;
		
		case 0x01:
			tmp=GPIOx->CFG1 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG1 =tmp|PUPD;
			break;
		
		case 0x02:
			tmp=GPIOx->CFG2 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG2 =tmp|PUPD;
			break;
		
		case 0x03:
			tmp=GPIOx->CFG3 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG3 =tmp|PUPD;
			break;
		
		case 0x04:
			tmp=GPIOx->CFG4 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG4 =tmp|PUPD;
			break;
		
		case 0x05:
			tmp=GPIOx->CFG5 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG5 =tmp|PUPD;
			break;
		
		case 0x06:
			tmp=GPIOx->CFG6 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG6 =tmp|PUPD;
			break;
		
		case 0x07:
			tmp=GPIOx->CFG7 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG7 =tmp|PUPD;
			break;
		
		case 0x08:
			tmp=GPIOx->CFG8 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG8 =tmp|PUPD;
			break;
		
		case 0x09:
			tmp=GPIOx->CFG9 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG9 =tmp|PUPD;
			break;
		
		case 0x0a:
			tmp=GPIOx->CFG10 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG10 =tmp|PUPD;
			break;
		
		case 0x0b:
			tmp=GPIOx->CFG11 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG11 =tmp|PUPD;
			break;
		
		case 0x0c:
			tmp=GPIOx->CFG12 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG12 =tmp|PUPD;
			break;
		
		case 0x0d:
			tmp=GPIOx->CFG13 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG13 =tmp|PUPD;
			break;
		
		case 0x0e:
			tmp=GPIOx->CFG14 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG14 =tmp|PUPD;
			break;
		
		case 0x0f:
			tmp=GPIOx->CFG15 &=0xffffff3ful;
			SYSREG->ACCESS_EN=0x05fa659aul;
			GPIOx->CFG15 =tmp|PUPD;
			break;
		
		default:
			break;
	}
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
  * GPIO_Init();
  * @endcode
  * @warning:
*/

/***************************************************************************************
										���ùܽŹ���ѡ���ʼ���б�
****************************************************************************************/
void GPIO_Init()
{
	
//		GPIO_AF_SEL(DIGITAL,PA,8,2);       		// PWM1A
//		GPIO_AF_SEL(DIGITAL,PA,9,2);			// PWM2B
//		GPIO_AF_SEL(DIGITAL,PA,10,2);		   	// PWM2A
//	  	GPIO_AF_SEL(DIGITAL,PB,13,2);			 // PWM0B
//		GPIO_AF_SEL(DIGITAL,PB,14,2);			 // PWM0A
//		GPIO_AF_SEL(DIGITAL,PB,15,2);			 // PWM1B
//	
//		GPIO_AF_SEL(DIGITAL,PA,11,7);			 // TIM_CH1
//		GPIO_AF_SEL(DIGITAL,PA,12,7);			 // TIM_CH1N
//		GPIO_AF_SEL(DIGITAL,PB,12,4);			 // TIM_BKIN
//	
//		GPIO_AF_SEL(DIGITAL,PB,2,5);			 // PB2ѡ��XCLKOUT���ù���
//	
//		GPIO_AF_SEL(ANALOGY,PB,11,0);			 // ADCB6
//		GPIO_AF_SEL(ANALOGY,PC,13,0);			 // ADCB7
//	
//		GPIO_AF_SEL(ANALOGY,PA,0,0);			 // OPA0P
//	
//		GPIO_AF_SEL(ANALOGY,PB,0,0);			 // OPA2P
//	
//		GPIO_AF_SEL(DIGITAL,PB,8,5);			 // TIM_CH2	
//		GPIO_AF_SEL(DIGITAL,PB,9,5);			 // TIM_CH2N
//		GPIO_AF_SEL(DIGITAL,PC,0,1);			 // TIM_CH3
//		GPIO_AF_SEL(DIGITAL,PB,1,6);			 // TIM_CH3N
//		
//		GPIO_AF_SEL(DIGITAL,PC,6,3);   	 		// PC6ѡ��UART0_TX����
//		GPIO_AF_SEL(DIGITAL,PA,15,3);  		 	// PA15ѡ��UART0_RX����
		


		//����Ϊ����ģʽ

		
//		GPIO_AF_SEL(DIGITAL,PB,6,3);			 // PB6ѡ��UART1_TX����
//		GPIO_AF_SEL(DIGITAL,PB,7,3);			 // PB7ѡ��UART1_RX����
		
	
}
