#include <stdio.h>
int main(){
    float x,y;
    char choice;
    printf("Enter two Number");
    scanf("%f %f",&x,&y);
    getchar();
    printf("\n Enter your Choice of Operator\n");
    printf("+ for addition\n");
    printf("- for subtraction\n");
    printf("* or X for multiplication\n");
    printf("/ for division\n");
    scanf("%c",&choice);

    switch (choice)
    {
    case '+':
    {
        printf ("\n Addition of %f and %f is %f",x,y,x+y);
        break;
    }
    case '-':
    {
        printf("\n %f subtracted from %f gives %f",x,y,x-y);
        break;
    }
    case '*':
    case'X':        
    {
    printf("\n %f multiplied with %f gives %f",x,y,x*y);
        break;
    }
    case '/': 
    {
        if (y==0)
            printf("Division not possible");
            else
            printf("%f divided by %f gives %f",x,y,x/y);
    }
            break;  

    
    default:
    printf("Invalid choice");
        
    }
    return 0;
}