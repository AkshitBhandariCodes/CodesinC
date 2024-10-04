#include <stdio.h>
void main(){
    int n,r,bin=0,pow=1;
    printf("Enter a Number");
    scanf("%d",&n);
    while(n!=0){
        r=n%2;
        bin=bin+r*pow;
        pow=pow*10;
        n=n/2;
    }
    printf("the number %d into binary will be %d",n,bin);
}