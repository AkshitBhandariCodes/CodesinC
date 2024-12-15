#include <stdio.h>

int fact(int a); 

void main() {
    int a, f;
    printf("Enter a value: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        f = fact(a);
        printf("Factorial of %d is %d\n", a, f);
    }
}

int fact(int a) {
    int i, f = 1; 
    for (i = a; i >= 1; i--) {
        f = f * i; 
    }
    return f; 
}
