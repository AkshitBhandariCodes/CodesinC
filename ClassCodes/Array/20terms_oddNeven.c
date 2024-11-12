#include <stdio.h>
void main(){
    int odd[20],i,even[20]; 
    printf("To print 20 odd and even numbers");
    for(i=0; i<=19;i++)
    {
        odd[i]=2*i+1;
        even[i]=odd[i]-1;
    }
    printf("\n Odd Values: \n");
    for(i=0; i<=19;i++)
    printf("%d ,", odd[i]);

    printf("\n Even Values: \n");
    for(i=0; i<=19;i++)
    printf("%d  ,", even[i]);

    }