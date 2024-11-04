#include <stdio.h>

int main() {
    int a, b, c, greatest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    greatest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
