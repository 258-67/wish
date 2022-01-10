//别碰方块
#include<stdio.h>
#include<conio.h>
#include<ctime>
#include<graphics.h>
int main()
{
	srand(time(0)*10);
	int score=0,flag=1,flag1=1;
	float gravity,width,height;
	float ball_x,ball_y,radius,ball_vy;
	float rect_left_x,rect_height,rect_width,rect_top_y,rect_vx;
	width=height=600;
	initgraph(width,height);
	gravity=0.6;
	radius=30;
	ball_x=width/4;
	ball_y=height-radius;
	ball_vy=0;
	rect_height=100;
	rect_width=20;
	rect_left_x=width*3/4;
	rect_vx=-3;
	while(1)
	{
		if(kbhit())
		{
		char input=_getch();
		if(input==' '&&flag) ball_vy=-15;
		flag=0;
		}
	    rect_top_y=height-rect_height;
		if(ball_y-radius<0) //防止跳出定界框
		{
			ball_vy=0;
			ball_y=radius;
		}
		ball_vy+=gravity;
		ball_y+=ball_vy;
		rect_left_x+=rect_vx;
		if(ball_y>height-radius)//防止砸穿地面
		{
			ball_vy=0;
			ball_y=height-radius;
			flag=1;
		}
		if(rect_left_x+rect_width<0)
		{
			if(flag1) score+=1;
			rect_left_x=width;
			rect_height=rand()%51+75;
			rect_vx=rand()%2-4;
			flag1=1;
		}
		cleardevice();
		fillcircle(ball_x,ball_y,radius);
		fillrectangle(rect_left_x,rect_top_y,rect_left_x+rect_width,height);
		TCHAR s[20];//定义字符串
		_stprintf(s,_T("%d"),score);//将score转为字符串
		settextstyle(40,0,_T("宋体"));//设置文字大小、字体
		outtextxy(50,30,s);//输出得分文字
		Sleep(10);
		if((rect_left_x<=ball_x+radius)&&(rect_left_x+rect_width>ball_x-radius)&&(height-rect_height<=ball_y+radius)) 
		{
			Sleep(100);
			score=0;
			flag1=0;
		}
	}
	_getch();
	closegraph();
	return(0);
}