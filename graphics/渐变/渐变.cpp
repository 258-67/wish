//graphics.h文件内COLORREF定义颜色变量
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
				if((j/100)==1||(j/100)==3)//j初值为0
				{//实现2&&4行反向
					COLORREF color=HSVtoRGB(120,1,1-c),color1=HSVtoRGB(280,1,0.5-c1);//color中明度从1开始递减，1-c在x轴上150~200区间内的值恰好为1.00~0.00
					setlinecolor(color);
					if(a-i<=100) line(a,j+50,a,j+100);
					else
					{
						setlinecolor(color1);
						line(a,j+50,a,j+100); 
					}
				}
				else 
				{//添置第三层循环，画150条线，设置颜色变量，实行渐变条
					COLORREF color=HSVtoRGB(120,1,c-0.5),color1=HSVtoRGB(280,1,c1);//color中c-0.5明度在x轴上50~150区间变化范围为0.00~1.00
					setlinecolor(color1);
					if(a-i<=50) line(a,j+50,a,j+100);
					else
					{//1&&3行，不用setfillcolor而用setlinecolor画出渐变条
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
