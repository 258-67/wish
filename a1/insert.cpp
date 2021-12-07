#include<stdio.h>
void insert(int a[],int n,int x)
{
int *p=a+n-1;
for(;p>=a&&*p>x;p--)
	*(p+1)=*p;
*(p+1)=x;
for(int *q=a;q<a+n+1;q++)
	printf("%d ",*q);
}
int main()
{
	int a[5]={10,20,30,40},m;//数组长度为5，防止a的栈区被破坏
	scanf("%d",&m);
	insert(a,4,m);
	return(0);
}

