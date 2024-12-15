#include <stdio.h>
void main(){
    int x[10][10],y[10][10],z[10][10];
    int i,j,m1,m2,n1,n2,k,sum=0;

    printf("Enter the no. of rows and column for matrix 1");
    scanf("%d%d",&m1,&n1);
    printf("Enter the no. of rows and column for matrix 2");
    scanf("%d%d",&m2,&n2);

    if(n1!=m2){
    printf("Invalid");
    }
    else{
        printf("Enter Elements for first matrix \n");
        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                scanf("%d",&x[i][j]);
            }
        }
        printf("Enter Elements for second matrix \n");
        for(i=0;i<m2;i++){
            for(j=0;j<n2;j++){
                scanf("%d",&y[i][j]);
            }
        }

        printf("Matrix After Multiplication \n");
        for(i=0;i<m1;i++){
            for(j=0;j<n2;j++){
                sum=0;
                for(k=0;k<n1;k++){
                    sum=sum+x[i][k]*y[k][j];
                }
               z[i][j]= sum;
                printf("%d",z[i][j]);
            }
            printf("\n");
        }



    }
}