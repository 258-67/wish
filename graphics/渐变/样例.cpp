#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	initgraph(750,500);
	setbkcolor(RGB(255,255,255));
	cleardevice();//�Ա���ɫ���Ļ��
	int x,xStart,xEnd;//x��ʼ����ֹ����
	int c,cStart,cEnd;//��ʼ��ɫ����ֹ��ɫ
	xStart=50;

	while(xStart<600)
	{//����1&&3��
		xEnd=xStart+50;//��һ�ε�x��ֹ����+50��Ҳ���ǻ�һ��50���صĿ�
		cStart=255;//��ʼ��ɫΪȫ��ɫ
		cEnd=128;//�����ɫΪ����ɫ
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