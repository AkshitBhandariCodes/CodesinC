#include <stdio.h>
void function(int);
void main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    function(a);
}
void function(int a)
{
    if (a%2==0){
        printf("%d is even",a);
    }
    else{
        printf("%d is odd",a);
    }
}
