/**
	******************************************************************************
  * @file 	    main.c
  * @author 	  杭州朗迅科技有限公司
  * @version 		V2.0
  * @brief   		主板OLED实验
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


#define CLK_1 	PA_OUT_HIGH(10);//PC3输出高电平、、E
#define CLK_0 	PA_OUT_LOW(10);//PC3输出低电平

#define SID_1 	PA_OUT_HIGH(9);//PC4输出高电平、、RW
#define SID_0 	PA_OUT_LOW(9);//PC4输出低电平

#define CS_1 	PA_OUT_HIGH(7);//PC6输出高电平、、RS
#define CS_0 	PA_OUT_LOW(7);//PC6输出低电平

#define PSB_1 	PA_OUT_HIGH(11);//PC7输出高电平、、PSB
#define PSB_0 	PA_OUT_LOW(11);//PC7输出低电平


void Delay(__IO uint32_t nCount) //_IO 是类型修饰符;u32 是数据类型,同等于 uint_32_t 同等于 unsigned int 型 
{
	for(; nCount != 0; nCount--); 
}
//这个延时函数没有返回值
//***************************//

void send_dat(unsigned char dat) // 发送一个字节的数据 
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

void send_cmd(unsigned char cmd) //发送指令 
{ 
	send_dat(0xf8); // 
	send_dat(cmd&0xf0); // 
	send_dat((cmd&0x0f)<<4); //取高 4 位 
}

void write_char(unsigned char dat) 	//写数据 
{ 
	send_dat(0xfa); 				//rw=0;rs=1 
	send_dat(dat&0xf0); 
	send_dat((dat&0x0f)<<4); 
}

void lcd_clear() //清除显示 
{ 
	send_cmd(0x01); 
}

void lcd_pos(unsigned char y_add , unsigned char x_add) //设定显示位置 
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

void lcd_wstr(unsigned char y_add , unsigned char x_add , unsigned char *str) //写字符 
{ 
	unsigned char i; 
	
	lcd_pos(y_add, x_add);
	for(i=0; str[i]!='\0'; i++)
	{ 
		write_char(str[i]);
	} 
}

void write_figer(uint8_t y_add, uint8_t x_add, uint32_t figer)
//在任何位置写数字-数组 
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
		if(d[i] != 0) //不等于位开始零输出 
			break; 
	}
	if(i == 5)
		i--; 
	if(i == 4)
		write_char(0x30); //数据装完，准备发送 
	for(j = i; j < 5; j++) 
	{ 
		if(j == 3)
		{ 
			write_char('.'); 
			continue; 
		} 
		write_char(d[j] | 0x30); 
		//取得的数字加上 0x30 也即得到该数字的 ASCII 码，再将该数字发送去显示 
	} 
}
void lcd_init() //lcd 初始化 
{ 
	PC_OUT_ENABLE(3); 
	PC_OUT_ENABLE(4);
	PC_OUT_ENABLE(6); 
	PC_OUT_ENABLE(7); 
	CS_1; 
	Delay(0xfff); 
	send_cmd(0x30); 
	send_cmd(0x0C); //0000,1100 整体显示，游标 off，游标位置 off 
	send_cmd(0x01); //0000,0001 清 DDRAM 
	send_cmd(0x02); //0000,0010 DDRAM 地址归位 
	send_cmd(0x80) ;//1000,0000 设定 DDRAM 7 位地址 000，0000 到地址计数器 A 
	PSB_0; 
}
	
	
int main()
{
	
	Device_Init();	//系统初始化
	
	while(1)
	{
		lcd_init(); 		//液晶显示屏 
		lcd_clear();		//液晶清屏 
		
		lcd_wstr(1, 1, "实验一");		//字符显示 
		lcd_wstr(2, 0, "LCD12864");		//字符显示 
	}
	
}
