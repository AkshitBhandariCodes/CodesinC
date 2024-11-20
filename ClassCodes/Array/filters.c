#include <stdio.h>
void main(){
    int sum[10], total=0, max, min, i;
    printf("Enter array elements");
    for (i=0; i<10; i++){
        scanf("%d",&sum[i]);
        total=total + sum[i]; }
        printf("sum of array elements is %d", total);
        min = sum[0];
        min = sum[0];
        for(i=1; i<=9; i++){
            if(sum[i]<min)
            min=sum[i];
            if(sum[i]>max)
            max=sum[i];
        }
        printf("maximum value is %d", max);
        printf("maximum value is %d", min);
}