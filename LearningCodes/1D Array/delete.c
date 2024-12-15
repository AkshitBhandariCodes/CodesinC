#include <stdio.h>
void main() {
    int array1[10], x, i, j, size = 10;

    // Input array elements
    printf("Enter array elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    // Input the element to be searched and deleted
    printf("Enter the element to be searched and deleted: ");
    scanf("%d", &x);

    // Search for the element
    for (i = 0; i < size; i++) {
        if (x == array1[i]) {
            printf("%d is found at location %d\n", x, i);

            // Shift elements to the left to delete the element
            for (j = i; j < size - 1; j++) {
                array1[j] = array1[j + 1];
            }
            size--; // Reduce the size of the array
            break; // Exit the loop after deleting
        }
    }

    if (size==10) {
        printf("%d not found\n", x);
    } else {
        // Print the updated array
        printf("Updated array: ");
        for (i = 0; i < size; i++) {
            printf("%d ", array1[i]);
        }
        printf("\n");
    }
}
