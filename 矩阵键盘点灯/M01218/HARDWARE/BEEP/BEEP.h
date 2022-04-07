#ifndef __BEEP_H
#define __BEEP_H	

#include <SC32F5832.h>
#include <GPIO.h>

#define BUZ_TGL 		PA_OUT_TOGGLE(12)		//��ת������

#define buzzer_off 	PA_OUT_HIGH(12)	//PA12����ߵ�ƽ �رշ�����
#define buzzer_on 	PA_OUT_LOW(12)	//PA12����͵�ƽ ����������

#define BUZ_OFF 		PA_OUT_HIGH(12)	//PA12����ߵ�ƽ �رշ�����
#define BUZ_ON 			PA_OUT_LOW(12)	//PA12����͵�ƽ ����������


void BUZ_init(void);	//��������ʼ��
void SysRun_Hint(void);	//ϵͳ����ָʾ��

#endif
