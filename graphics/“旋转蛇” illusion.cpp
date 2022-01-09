#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#define PI 3.1415926
int main()
{
	int height=800,width=1200;
	initgraph(width,height);
	setbkcolor(RGB(128,128,128));
	cleardevice();
	int color_x,color_y,radius,i;
	double set,set1=0;
	for(color_x=200;color_x<1200;color_x+=400)
		for(color_y=200;color_y<800;color_y+=400)
			for(radius=200;radius>0;radius-=50)
			{
				int left=color_x-radius,top=color_y-radius,right=color_x+radius,bottom=color_y+radius;
				for(i=0;i<30;i++)
				{
					set=PI/15*i+set1;
					setfillcolor(RGB(0,240,220));
					solidpie(left,top,right,bottom,set,set+PI/60);
					setfillcolor(RGB(255,255,255));
					solidpie(left,top,right,bottom,set+PI/60,set+PI/30);
					setfillcolor(RGB(240,0,0));
					solidpie(left,top,right,bottom,set+PI/30,set+PI/20);
					setfillcolor(RGB(0,0,0));
					solidpie(left,top,right,bottom,set+PI/20,set+PI/15);
				}
				set1+=PI/60;
			}
	_getch();
	closegraph;
	return(0);
}