/*while(1)��_getch()����ʵ�ְ����л�Ч�����������������ɫ
	HSVtoRGB(c,1,1)����ʵ�������ɫ*/
#include<stdio.h>
#include<time.h>
#include<graphics.h>
#include<conio.h>
#define PI 3.1415926
int main()
{
	initgraph(800,600);
	setbkcolor(RGB(128,128,128));
	cleardevice();
	srand(time(0)*10);
	int color_x,color_y,radius,i;
	double set,set1=0;
	while(1)
	{
		for(color_x=100;color_x<800;color_x+=200)
			for(color_y=100;color_y<600;color_y+=200)
			{
				double c=rand()%180;//���������ɫ����ʹ��ÿһ�µ�ͬ��Բ������ɫ
				COLORREF color1=HSVtoRGB(c,1,1),color2=HSVtoRGB(c+180,1,1);
				for(radius=100;radius>0;radius-=20)
				{
					int left=color_x-radius,top=color_y-radius,right=color_x+radius,bottom=color_y+radius;
					for(i=0;i<20;i++)
					{//���ﲻ��COLORREF�����������ɫ����Խ��Խ�ã�̫����Եò��ӣ���ʾ����������
						set=i*PI/10+set1;
						setfillcolor(color1);
						solidpie(left,top,right,bottom,set,set+PI/20);
						setfillcolor(color2);
						solidpie(left,top,right,bottom,set+PI/20,set+PI/10);
					}
					set1+=PI/20;
				}
			}
			_getch();
	}
	closegraph();
	return(0);
}