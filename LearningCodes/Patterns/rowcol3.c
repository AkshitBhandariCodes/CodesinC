#include <stdio.h>
void main(){
    int i,j,r;
    printf("Enter the number of rows");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(j=1;j<=r-i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

}

// pattern
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3
// 1 2
// 1