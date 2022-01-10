#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	initgraph(750,500);
	setbkcolor(RGB(255,255,255));
	cleardevice();//以背景色清空幕布
	int x,xStart,xEnd;//x起始、终止坐标
	int c,cStart,cEnd;//起始颜色，终止颜色
	xStart=50;

	while(xStart<600)
	{//绘制1&&3行
		xEnd=xStart+50;//这一段的x终止坐标+50，也就是画一个50像素的块
		cStart=255;//初始颜色为全紫色
		cEnd=128;//最后颜色为暗紫色
		for(x=xStart;x<xEnd;x++)
		{
			c=(x-xStart)*(cEnd-cStart)/(xEnd-xStart)+cStart;
			setlinecolor(RGB(c,0,c));
			line(x,50,x,100);
			line(x,250,x,300);
		}

		xStart=xEnd;
		xEnd=xStart+100;
		cStart=0;
		cEnd=255;
		for(x=xStart;x<xEnd;x++)
		{
			c=(x-xStart)*(cEnd-cStart)/(xEnd-xStart)+cStart;
			setlinecolor(RGB(c,c,0));
			line(x,50,x,100);
			line(x,250,x,300);
		}
		xStart=xEnd+20;
	}

	xStart=50;
	while(xStart<600)
	{
		xEnd=xStart+100;
		cStart=255;
		cEnd=0;
		for(x=xStart;x<xEnd;x++)
		{
			c=(x-xStart)*(cEnd-cStart)/(xEnd-xStart)+cStart;
			setlinecolor(RGB(c,c,0));
			line(x,150,x,200);
			line(x,350,x,400);
		}

		xStart=xEnd;
		xEnd=xStart+50;
		cStart=128;
		cEnd=255;
		for(x=xStart;x<xEnd;x++)
		{
			c=(x-xStart)*(cEnd-cStart)/(xEnd-xStart)+cStart;
			setlinecolor(RGB(c,0,c));
			line(x,150,x,200);
			line(x,350,x,400);
		}
		xStart=xEnd+20;
	}

	_getch();
	closegraph();
	return(0);
}