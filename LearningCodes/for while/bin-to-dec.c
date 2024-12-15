#include <stdio.h>
void main(){
    int n,r,pow=1,b=0;
    printf("Enter a Number");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        b=b+r*pow;
        pow=pow*2;
        n=n/10;
    }
    printf("Binary Equivalent Number is %d", b);
}