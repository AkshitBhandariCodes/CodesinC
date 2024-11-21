#include <stdio.h>
void main(){
    int i,j,r,c;
    char b,p;
    printf("Enter the character for making border");
    scanf(" %c",&b);
    printf("Enter the character for padding");
    scanf(" %c",&p);
    printf("enter the number of rows and columns");
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++){
            if(i==1 || i==r || j==1 || j==c)
            printf("%c",b);
            else
            printf("%c",p);
        }
        printf("\n");
    }

}

//pattern
// **********
// *--------*
// *--------*
// *--------*
// **********