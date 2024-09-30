#include <stdio.h>
#include <conio.h>
int main(){
    int n,x,y;
    printf("enter value of n");
    scanf("%d", &n);
    x=n<<1;
    y=n>>1;
    printf("The value of 2^%d is %d \n", n,x );
    printf("The value of 1/2 ^%d is %d", n,y);
    return 0;
}