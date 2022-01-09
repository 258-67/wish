//Ò»²ãforÑ­»·×ã¹»
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#define PI 3.1415926
int main()
{
	initgraph(400,400);
	setbkcolor(RGB(241,241,0));
	setlinecolor(RGB(0,0,0));
	cleardevice();
	int i=1,t=20;
	for(;i<20;i++)
	{
		line(i*t,t,i*t,19*t);
		line(t,i*t,19*t,i*t);
	}
	_getch();
	closegraph;
	return(0);
}