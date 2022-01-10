#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#define PI 3.1415926
int main()
{
	initgraph(600,600);
	setbkcolor(RGB(255,255,255));
	cleardevice();
	int color_x=300,color_y=300,radius=200;
	int left=color_x-radius,top=color_y-radius,right=color_x+radius,bottom=color_y+radius;
	int i,step=10;
	COLORREF color;
	for(i=0;i<360;i+=step)
	{
		color=HSVtoRGB(i,1,1);
		setfillcolor(color);
		solidpie(left,top,right,bottom,i*PI/180,(i+step)*PI/180);
	}
	_getch();
	closegraph();
	return(0);
}