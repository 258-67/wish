//graphics.h文件内solidpie函数
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#define PI 3.1415926
int main()
{
	initgraph(600,600);//初始化600*600像素的幕布
	setbkcolor(RGB(128,128,128));//设置背景颜色
	cleardevice();//以背景颜色清空幕布
	int color_x=300,color_y=300,radius=200;
	int left=color_x-radius,top=color_y-radius,right=color_x+radius,bottom=color_y+radius;
	setfillcolor(RGB(0,255,0));
	solidpie(left,top,right,bottom,0,PI/2);
	setfillcolor(RGB(255,255,255,255));
	solidpie(left,top,right,bottom,PI/2,PI);
	setfillcolor(RGB(255,0,0));
	solidpie(left,top,right,bottom,PI,PI*3/2);
	setfillcolor(RGB(0,0,0));
	solidpie(left,top,right,bottom,PI*3/2,PI*2);
	_getch();
	closegraph();
	return(0);
}