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

/*#define---------------------------------------------------------------------*/

/* Private functions declared ------------------------------------------------*/


#define CLK_1 	PA_OUT_HIGH(10);//PC3����ߵ�ƽ����E
#define CLK_0 	PA_OUT_LOW(10);//PC3����͵�ƽ

#define SID_1 	PA_OUT_HIGH(9);//PC4����ߵ�ƽ����RW
#define SID_0 	PA_OUT_LOW(9);//PC4����͵�ƽ

#define CS_1 	PA_OUT_HIGH(7);//PC6����ߵ�ƽ����RS
#define CS_0 	PA_OUT_LOW(7);//PC6����͵�ƽ

#define PSB_1 	PA_OUT_HIGH(11);//PC7����ߵ�ƽ����PSB
#define PSB_0 	PA_OUT_LOW(11);//PC7����͵�ƽ


void Delay(__IO uint32_t nCount) //_IO ���������η�;u32 ����������,ͬ���� uint_32_t ͬ���� unsigned int �� 
{
	for(; nCount != 0; nCount--); 
}
//�����ʱ����û�з���ֵ
//***************************//

void send_dat(unsigned char dat) // ����һ���ֽڵ����� 
{ 
	unsigned char i; 
	for(i=0;i<8;i++) 
	{
		if((dat & 0x80) == 0x80) SID_1; 
		if((dat & 0x80) == 0x00) SID_0; 
		CLK_0;
		Delay(350);
		CLK_1;
		dat<<=1;
	} 
}

void send_cmd(unsigned char cmd) //����ָ�� 
{ 
	send_dat(0xf8); // 
	send_dat(cmd&0xf0); // 
	send_dat((cmd&0x0f)<<4); //ȡ�� 4 λ 
}

void write_char(unsigned char dat) 	//д���� 
{ 
	send_dat(0xfa); 				//rw=0;rs=1 
	send_dat(dat&0xf0); 
	send_dat((dat&0x0f)<<4); 
}

void lcd_clear() //�����ʾ 
{ 
	send_cmd(0x01); 
}

void lcd_pos(unsigned char y_add , unsigned char x_add) //�趨��ʾλ�� 
{ 
	switch(y_add) 
	{
		case 1: 
			send_cmd(0X80|x_add);
		break; 
		
		case 2: 
			send_cmd(0X90|x_add);
		break; 
		
		case 3: 
			send_cmd(0X88|x_add);
		break; 
		
		case 4: 
			send_cmd(0X98|x_add);
		break; 
		
		default:
			
		break; 
	} 
}

void lcd_wstr(unsigned char y_add , unsigned char x_add , unsigned char *str) //д�ַ� 
{ 
	unsigned char i; 
	
	lcd_pos(y_add, x_add);
	for(i=0; str[i]!='\0'; i++)
	{ 
		write_char(str[i]);
	} 
}

void write_figer(uint8_t y_add, uint8_t x_add, uint32_t figer)
//���κ�λ��д����-���� 
{ 
	uint8_t d[5], i, j;
	lcd_pos(y_add , x_add); 
	
	d[4] = figer % 10; 
	d[2] = figer % 100 / 10;
	d[1] = figer % 1000 / 100; 
	d[0] = figer % 10000 / 1000; 
	// d[0] = figer / 10000; 
	
	// d[4] = figer % 10; 
	// d[3] = figer % 100 / 10; 
	// d[2] = figer % 1000 / 100; 
	// d[1] = figer % 10000 / 1000; 
	// d[0] = figer / 10000; 
	
	for(i = 0; i < 5; i++) 
	{ 
		if(d[i] != 0) //������λ��ʼ����� 
			break; 
	}
	if(i == 5)
		i--; 
	if(i == 4)
		write_char(0x30); //����װ�꣬׼������ 
	for(j = i; j < 5; j++) 
	{ 
		if(j == 3)
		{ 
			write_char('.'); 
			continue; 
		} 
		write_char(d[j] | 0x30); 
		//ȡ�õ����ּ��� 0x30 Ҳ���õ������ֵ� ASCII �룬�ٽ������ַ���ȥ��ʾ 
	} 
}
void lcd_init() //lcd ��ʼ�� 
{ 
	PC_OUT_ENABLE(3); 
	PC_OUT_ENABLE(4);
	PC_OUT_ENABLE(6); 
	PC_OUT_ENABLE(7); 
	CS_1; 
	Delay(0xfff); 
	send_cmd(0x30); 
	send_cmd(0x0C); //0000,1100 ������ʾ���α� off���α�λ�� off 
	send_cmd(0x01); //0000,0001 �� DDRAM 
	send_cmd(0x02); //0000,0010 DDRAM ��ַ��λ 
	send_cmd(0x80) ;//1000,0000 �趨 DDRAM 7 λ��ַ 000��0000 ����ַ������ A 
	PSB_0; 
}
	
	
int main()
{
	
	Device_Init();	//ϵͳ��ʼ��
	
	while(1)
	{
		lcd_init(); 		//Һ����ʾ�� 
		lcd_clear();		//Һ������ 
		
		lcd_wstr(1, 1, "ʵ��һ");		//�ַ���ʾ 
		lcd_wstr(2, 0, "LCD12864");		//�ַ���ʾ 
	}
	
}
