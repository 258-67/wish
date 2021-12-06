#include<stdio.h>
int main()
{
	void hanoi(int n,char a,char b,char c);
	int m;
	printf("Input the number of disks:");
	scanf("%d",&m);
	printf("The step to move %d disks:\n",m);
	hanoi(m,'1','2','3');
	return(0);
}

void hanoi(int n,char a,char b,char c)
{
	void move(char x,char y);
	if(n==1) move(a,c);
	else {
		hanoi(n-1,a,c,b);
		move(a,c);
		hanoi(n-1,b,a,c);
	}
}
void move(char x,char y)
{
	printf("%c->%c\n",x,y);
}