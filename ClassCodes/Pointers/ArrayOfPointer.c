#include <stdio.h>

int main() {
    int x[5] = {10, 20, 30, 40, 50}; // Array of 5 integers
    int *ptr[5];                    // Array of 5 integer pointers
    int i;

    // Assign addresses of each element of x to the corresponding element in ptr
    for (i = 0; i < 5; i++) {
        ptr[i] = &x[i];
    }

    // Print the addresses and values using ptr
    for (i = 0; i < 5; i++) {
        printf("ptr[%d] = %p, *ptr[%d] = %d\n", i, ptr[i], i, *ptr[i]);
    }

    return 0;
}
