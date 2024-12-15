#include <stdio.h>
void main(){
int x[5][5],y[5][5],z[5][5],i,j,m,n;
printf("Enter the number of rows and column");
scanf("%d%d",&m,&n);

printf("Enter array 1 elements: \n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&x[i][j]);
    }
}

printf("Enter array 2 elements: \n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&y[i][j]);
    }
}

printf("After Addition: \n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        z[i][j]=x[i][j]+y[i][j];
        printf("%d",z[i][j]);
    }
    printf("\n");
}
}
