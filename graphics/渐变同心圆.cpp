//½¥±äÍ¬ĞÄÔ²
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	initgraph(600,600);
	setbkcolor(RGB(255,255,255));
	cleardevice();
	int radius;
	for(radius=255;radius>10;radius-=10)
	{
	setlinecolor(RGB(255-radius,radius,radius));
	circle(300,300,255-radius);
	}
	_getch();
	closegraph();
	return(0);
}