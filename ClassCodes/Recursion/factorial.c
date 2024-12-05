#include <stdio.h>
int fact(int);
void main()
{
    int a,f;
    printf("Enter a Number");
    scanf("%d",&a);
    f=fact(a);
    printf("%d",f);
}

int fact(int x)
{
    if(x==1)
    return(1);
    else
    return x*fact(x-1);
}