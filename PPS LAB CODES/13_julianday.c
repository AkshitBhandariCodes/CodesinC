#include <stdio.h>
int main(void)
{
int d,m,y;
int julian;
printf("Enter day, month and year value for date:");
scanf("%d%d%d",&d,&m,&y);
julian=d;
switch (m-1)
{
case 11:julian +=30;
case 10:julian +=31;
case 9:julian +=30;
case 8:julian +=31;
case 7:julian +=31;
case 6:julian +=30;
case 5:julian +=31;
case 4:julian +=30;
case 3:julian +=31;
case 2:julian +=28;
case 1:julian+=31;
}
if((y%4==0&&y%100!=0)||(y%400==0))
{ if ((m!=1)&&(m!=2))
julian++;
}
printf("Julian day for current year is %d",julian);
return 0;
}