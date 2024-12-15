#include <stdio.h>
//making a function for floyd triangle
void main() {
    int n,i, j, val = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", val);
            val++;
        }
        printf("\n");
    }
}