#include<stdio.h>
void main()
{
int year;
printf("Enter a number");
scanf("%d",&year);
if(year%100==0)
{
if(year%400==0)
printf("%d is a Leap Year", year);
else
printf("%d is not a Leap Year", year);
}
else
{
if(year%4==0)
printf("%d is a Leap Year", year);
else
printf("%d is not a Leap Year", year);
}
}