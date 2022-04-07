#include <SC32F5832.h>
#include <DevInit.h>
#include "LCD12864.h"
#include "delay.h"

/**
* @brief  LCD12864接线说明
* @param  SC32F5832 -> LCD12864
*							PC6 	-> 	CN3-RS
*							PC4 	-> 	CN3-RW
*							PC3 	-> 	CN3-E
*							PC7 	-> 	CN3-PSB
*							PC15 	-> 	CN3-RST
*/

	

void send_dat(uint8_t dat)
{
    uint8_t i;
    for(i=0;i<8;i++)
    {
			if((dat&0x80)==0x80) 
				SID_1;
			if((dat&0x80)==0x00) 
				SID_0;
			CLK_0;
			delay_us(50);
			CLK_1;
			dat<<=1;
    }
}	

void send_cmd(uint8_t cmd)
{
		send_dat(0xf8);
    send_dat(cmd&0xf0);
    send_dat((cmd&0x0f)<<4);
}	

void write_char(uint8_t dat)
{
		send_dat(0xfa);//rw=0;rs=1
    send_dat(dat&0xf0);
    send_dat((dat&0x0f)<<4);
}	
/***************************************************************
						 清除显示（清屏）
****************************************************************/
void lcd_clear(void)       
{
    send_cmd(0x01);
}

void lcd_pos(uint8_t y_add , uint8_t x_add)
{
    switch(y_add)
    {
        case 1:
        send_cmd(0X80|x_add);break;
        case 2:
        send_cmd(0X90|x_add);break;
        case 3:
        send_cmd(0X88|x_add);break;
        case 4:
        send_cmd(0X98|x_add);break;
        default:break;
    }    
}

/***************************************************************
						显示字符
****************************************************************/
void lcd_wstr(uint8_t y_add , uint8_t x_add , char *str)   
{
    uint8_t i;
    lcd_pos(y_add , x_add);
    for(i=0;str[i]!='\0';i++)
    {
        write_char(str[i]);  
    }
}
/***************************************************************
						显示数字-数组
****************************************************************/
void write_figer(uint8_t y_add, uint8_t x_add, uint32_t figer)
{
    uint8_t d[5],i,j;
    lcd_pos(y_add , x_add);
	
    d[4] = figer % 10;
    d[2] = figer % 100 / 10;
    d[1] = figer % 1000 / 100;
    d[0] = figer % 10000 / 1000;
//    d[0] = figer / 10000;
	
	
//	  d[4] = figer % 10;
//    d[3] = figer % 100 / 10;
//    d[2] = figer % 1000 / 100;
//    d[1] = figer % 10000 / 1000;
//    d[0] = figer / 10000;
	
    for(i = 0; i < 5; i++)
    {
        if(d[i]!=0)
					break;
    }
    if(i == 5)
			i--;
    if(i == 4)
			write_char(0x30);//数据装完，准备发送
    for(j = i; j < 5; j++)
    {
			if(j == 3)
			{
				write_char('.');
				continue;
			}		
      write_char(d[j] | 0x30);//取得的数字加上0x30也即得到该数字的ASCII码，再将该数字发送去显示
    }
 
}
/***************************************************************
						LCD初始化
****************************************************************/
void lcd_init(void)     //
{  
		//液晶IO端口使能
		PC_OUT_ENABLE(3);	
		PC_OUT_ENABLE(4);	
		PC_OUT_ENABLE(6);	
		PC_OUT_ENABLE(7);
		PC_OUT_ENABLE(15);	
	
		//功能初始化
		RST_0;//液晶复位
    delay_us(50);
		RST_1;
		delay_us(50);
		CS_1;
    delay_us(500);
    send_cmd(0x30);
    send_cmd(0x0C);//0000,1100 整体显示，游标off，游标位置off
    send_cmd(0x01);//0000,0001 清DDRAM
    send_cmd(0x02);//0000,0010 DDRAM地址归位
    send_cmd(0x80);//1000,0000 设定DDRAM 7位地址000，0000到地址计数器A
	  PSB_0;
}

