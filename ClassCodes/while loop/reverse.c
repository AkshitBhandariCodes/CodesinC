#include <stdio.h>
void main(){
    int n,q,r,rev=0;
    printf("Enter a Number");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
    r=q%10;
    rev=rev*10+r;
    q=q/10;
    }
    printf("reverse of %d is %d",n,rev);
    }