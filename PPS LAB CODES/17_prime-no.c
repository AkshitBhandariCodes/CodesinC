#include<stdio.h>
void main(){
int n,i;
printf("Enter a number");
scanf("%d",&n);
if(n<2)
printf("%d is not a prime number",n);
else{
    for(i=2;i<n/2;i++){
        if(n%i==0){
            printf("%d is not a prime number",n);
            break;
        }
        else{
            printf("%d is a prime number",n);
        }
    }


}
}