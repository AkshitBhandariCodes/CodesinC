#include<stdio.h>
void main(){
    int x[10][10],tx[10][10],i,j,m,n;
    printf("Enter the number of rows and column");
    scanf("%d%d",&m,&n);

    printf("Enter the Array: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&x[i][j]);
        }
    }
    printf("Display the Array: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",x[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            tx[i][j]=x[j][i];
        }
    }

    printf("Transpose of the matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",tx[i][j]);
        }
        printf("\n");
    }
}