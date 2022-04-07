#ifndef __DRV_OLED_H
#define __DRV_OLED_H

#include <SC32F5832.h>
#include <DevInit.h>
#include "stdlib.h"	    	
//OLED模式设置
//0:4线串行模式
//1:并行8080模式
#define OLED_MODE 	0
#define SIZE 				16
#define XLevelL			0x00
#define XLevelH			0x10
#define Max_Column	128
#define Max_Row			64
#define	Brightness	0xFF 
#define X_WIDTH 		128
#define Y_WIDTH 		64	    						  
//-----------------OLED端口定义----------------  					   
#define OLED_CS_Clr()  		PA_OUT_LOW(4)		//CS
#define OLED_CS_Set()  		PA_OUT_HIGH(4)

#define OLED_RST_Clr() 		PA_OUT_LOW(8)		//RES
#define OLED_RST_Set() 		PA_OUT_HIGH(8)

#define OLED_DC_Clr()  		PA_OUT_LOW(7)		//DC
#define OLED_DC_Set()  		PA_OUT_HIGH(7)

#define OLED_SCLK_Clr() 	PA_OUT_LOW(5)		//D0
#define OLED_SCLK_Set() 	PA_OUT_HIGH(5)

#define OLED_SDIN_Clr() 	PA_OUT_LOW(6)		//D1
#define OLED_SDIN_Set()		PA_OUT_HIGH(6)

 		     
#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据


//OLED控制用函数
void OLED_FirstPage(void);
void OLED_Test_Task(void);
void OLED_WR_Byte(uint8_t dat,uint8_t cmd);	    
void OLED_Display_On(void);
void OLED_Display_Off(void);	   							   		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(uint8_t x,uint8_t y,uint8_t t);
void OLED_Fill(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,uint8_t dot);
void OLED_ShowChar(uint8_t x,uint8_t y,uint8_t chr);
void OLED_ShowNum(uint8_t x,uint8_t y,uint32_t num,uint8_t len,uint8_t size);
void OLED_ShowString(uint8_t x,uint8_t y, uint8_t *p);	 
void OLED_Set_Pos(unsigned char x, unsigned char y);
void OLED_ShowCHinese(uint8_t x,uint8_t y,uint8_t no);
void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
#endif  
	 



