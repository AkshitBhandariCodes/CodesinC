#include <stdio.h>
#include<math.h>
void main(){
    long int n,sum=0,q;
    int r,count=0;
    printf("Enter a Number");
    scanf("%ld",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        count++;
        q=q/10;
    }
    q=n;
    while (q!=0)
    {
        r=q%10;
        sum+=pow(r,count);
        q=q/10;
    }
    if (n==sum)
    {
        printf("%d is AMSTRONG NUMBER",n);
    }
    else{
        printf("%d is not an AMSTRONG NUMBER",n);
    }
}