#include <stdio.h>
void main(){
    int x[5]={0,-10,8,15,33};
    printf("Value stored at *x %d \n",*x);
    printf("Value stored at *(x+3) %d \n",*(x+3));
}