#ifndef __BEEP_H
#define __BEEP_H	

#include <SC32F5832.h>
#include <GPIO.h>

#define BUZ_TGL 		PA_OUT_TOGGLE(12)		//翻转蜂鸣器

#define buzzer_off 	PA_OUT_HIGH(12)	//PA12输出高电平 关闭蜂鸣器
#define buzzer_on 	PA_OUT_LOW(12)	//PA12输出低电平 开启蜂鸣器

#define BUZ_OFF 		PA_OUT_HIGH(12)	//PA12输出高电平 关闭蜂鸣器
#define BUZ_ON 			PA_OUT_LOW(12)	//PA12输出低电平 开启蜂鸣器


void BUZ_init(void);	//蜂鸣器初始化
void SysRun_Hint(void);	//系统运行指示器

#endif
