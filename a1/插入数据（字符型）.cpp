#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insert(char *p[],char *q,int len)
{
	char **p1=p;
	int i;
	for(i=len-1;strcmp(*(p1+i),q)>0&&p1>=p;i--)
		*(p1+i+1)=*(p1+i);
	*(p1+i+1)=q;
	for(;p1<p+len+1;p1++)
		printf("%s ",*p1);
}
int main()
{
	char *a[5]={"best","better","fine","good"},str[10];
	scanf("%s",str);
	insert(a,str,4);
	return(0);
}