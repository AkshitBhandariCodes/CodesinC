#include <stdio.h>
int main(){
    int i;
    float marks[5];
    float tmarks=0,avg,perc;
    for(i=0;i<=4;i++)
    {
        printf("\n Enter marks in Subject :%d", i+1);
        scanf("%f",&marks[i]);
        tmarks+=marks[i];
    }
    avg=tmarks/5;
    perc=tmarks/4;
    printf("\n Total marks : %f", tmarks);
    printf("\n Average Marks :%f", avg);
    printf("\n Percentage : %f", perc);
}