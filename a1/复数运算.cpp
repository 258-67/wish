#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct complex 
{
  double r; /* Êµ²¿ */ 
  double i; /* Ðé²¿ */ 
} COMPLEX; 
COMPLEX ADD(COMPLEX c1,COMPLEX c2)
{
COMPLEX sum;
  sum.r=c1.r+c2.r;
  sum.i=c1.i+c2.i;
  return sum;
}
COMPLEX SUB(COMPLEX c1,COMPLEX c2)
{
COMPLEX dif;
  dif.r=c1.r-c2.r;
  dif.i=c1.i-c2.i;
  return dif;
}
COMPLEX MUL(COMPLEX c1,COMPLEX c2)
{
COMPLEX m;
  m.r=c1.r*c2.r-c1.i*c2.i;
  m.i=c1.r*c2.i+c1.i*c2.r;
  return m;
}
COMPLEX DIV(COMPLEX c1,COMPLEX c2)
{
COMPLEX d;
  d.r=(c1.r*c2.r+c1.i*c2.i)/(c2.r*c2.r+c2.i*c2.i);;
  d.i=(c1.i*c2.r-c1.r*c2.i)/(c2.r*c2.r+c2.i*c2.i);;
  return d;
}

int main()
{
COMPLEX c1,c2;
  scanf("%lf %lf %lf %lf",&c1.r,&c1.i,&c2.r,&c2.i);
  printf("sum is:%.2lf+%.2lfi\n",ADD(c1,c2).r,ADD(c1,c2).i);
  printf("difference is:%.2lf+%.2lfi\n",SUB(c1,c2).r,SUB(c1,c2).i);
  printf("product is:%.2lf+%.2lfi\n",MUL(c1,c2).r,MUL(c1,c2).i);
  printf("quotient is:%.2lf+%.2lfi\n",DIV(c1,c2).r,DIV(c1,c2).i);
  return(0);
}

