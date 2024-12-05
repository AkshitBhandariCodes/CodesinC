#include <stdio.h>
int sumofdigit(int);
void main(){
    int x;
    printf("Enter a number to find the sum of the digits: \n");
    scanf("%d",&x);
    printf("The sum of digits of %d is %d \n",x,sumofdigit(x));
}
int sumofdigit(int x){
    if (x==0)
    return 0;
    else
    return (x%10)+sumofdigit(x/10);
}