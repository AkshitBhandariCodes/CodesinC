#include <stdio.h>
void main(){
    int n,i,r;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=1; i<=20; i++)
    {
    r=n*i;
    printf("%d X %d = %d \n", n,i,r);
    }

}