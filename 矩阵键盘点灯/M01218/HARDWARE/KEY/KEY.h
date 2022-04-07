#ifndef __KEY_H
#define __KEY_H	 

#include <SC32F5832.h>
#include <GPIO.h>

#define S2	((Key_TrgValue >> 0) & 0x01)
#define S3	((Key_TrgValue >> 1) & 0x01)
#define S4	((Key_TrgValue >> 10) & 0x01)
#define S5	((Key_TrgValue >> 11) & 0x01)

void KEY_init(void);	//���尴����ʼ��
void Key_ReadSta_Task(void);	//���尴��ɨ��
void Key_Ctrl(void);	//���尴������

#endif
