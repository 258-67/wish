#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define PI 3.1415926
int main()
{
	initgraph(800,600);
	cleardevice();
	int color_x,color_y,radius=100;
	for(color_x=0;color_x<=800;color_x+=200)
		for(color_y=0;color_y<=600;color_y+=200)
		{
			int left=color_x-radius,top=color_y-radius,right=color_x+radius,bottom=color_y+radius;
			solidpie(left,top,right,bottom,0,PI*2);
		}
		_getch();
		closegraph;
		return(0);
}