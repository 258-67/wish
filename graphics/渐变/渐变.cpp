//graphics.h�ļ���COLORREF������ɫ����
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	initgraph(730,520);
	setbkcolor(RGB(255,255,255));
	cleardevice();
	double c,c1;
	int i,j,a;
	for( j=0;j<400;j+=50)
	{
		for( a=i=50;i<680&&a-i<=150;i+=150)
		{
			for(c=0,c1=1,a=i;a-i<=150;a++,c+=0.01,c1-=0.01)
			{
				if((j/100)==1||(j/100)==3)//j��ֵΪ0
				{//ʵ��2&&4�з���
					COLORREF color=HSVtoRGB(120,1,1-c),color1=HSVtoRGB(280,1,0.5-c1);//color�����ȴ�1��ʼ�ݼ���1-c��x����150~200�����ڵ�ֵǡ��Ϊ1.00~0.00
					setlinecolor(color);
					if(a-i<=100) line(a,j+50,a,j+100);
					else
					{
						setlinecolor(color1);
						line(a,j+50,a,j+100); 
					}
				}
				else 
				{//���õ�����ѭ������150���ߣ�������ɫ������ʵ�н�����
					COLORREF color=HSVtoRGB(120,1,c-0.5),color1=HSVtoRGB(280,1,c1);//color��c-0.5������x����50~150����仯��ΧΪ0.00~1.00
					setlinecolor(color1);
					if(a-i<=50) line(a,j+50,a,j+100);
					else
					{//1&&3�У�����setfillcolor����setlinecolor����������
						setlinecolor(color);
						line(a,j+50,a,j+100);
					}
				}
			}
			i+=10;
		}
		j+=50;
	}
	_getch();
	closegraph();
	return(0);
}
