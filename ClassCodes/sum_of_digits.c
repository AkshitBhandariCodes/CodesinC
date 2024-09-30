#include <stdio.h>
void main(){
    int n,q,r,sum=0;
    printf("Enter a Number");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
    r=q%10;
    sum+=r;
    q=q/10;
    }
    printf("sum of %d is %d",n,sum);
    }