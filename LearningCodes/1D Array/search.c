#include <stdio.h>

void main() {
    int array1[10], x, i, found = 0;

    printf("Enter the elements of the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    for (i = 0; i < 10; i++) {
        if (x == array1[i]) {
            printf("%d is found at location %d\n", x, i + 1);
            break;
        }
    }

    if(i==10) {
        printf("%d is not found in the array\n", x);
    }
}
