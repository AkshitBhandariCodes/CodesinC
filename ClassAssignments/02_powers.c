#include <stdio.h>
#include <conio.h>
void main(){
    int n,x,y;
    printf("enter value of n");
    scanf("%d", &n);
    x=1<<n;
    y=1>>n;
    printf("The value of 2^%d is %d \n", n,x );
    printf("The value of 0.5 ^%d is %d", n,y);
    getch();
}