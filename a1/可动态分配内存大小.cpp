#include<stdio.h>
#include<stdlib.h>
#include<ctime>
int main()
{
	srand(time(NULL));
	int *p=(int*)malloc((1024*1024)*sizeof(int));
	free(p);
	return 0;
}