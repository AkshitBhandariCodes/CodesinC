#include <stdio.h>

void main() {
    int x[3][4], i, j;

    // Input array elements
    printf("Enter array elements:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    // Output array elements
    printf("Array elements are:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}
