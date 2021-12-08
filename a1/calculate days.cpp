#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  int s=0;
struct days
{
int year;
  int month;
  int date;
};
  struct days day;
  scanf("%d %d %d",&day.year,&day.month,&day.date);
  switch(day.month)
  {
    case 1:s+=day.date;break;
    case 2:s+=day.date+31;break;
    case 3:s+=day.date+59;break;
    case 4:s+=day.date+90;break;
    case 5:s+=day.date+120;break;
    case 6:s+=day.date+151;break;
    case 7:s+=day.date+181;break;
    case 8:s+=day.date+212;break;
    case 9:s+=day.date+243;break;
    case 10:s+=day.date+273;break;
    case 11:s+=day.date+304;break;
    case 12:s+=day.date+334;break;
  }
  if(day.year%4==0&&day.year%100!=0||day.year%400==0)
  {
    if(day.month>=2&&day.date>=28)
    s+=1;
  }
  printf("%d/%d is the %dth day in %d.",day.month,day.date,s,day.year);
  return(0);
}