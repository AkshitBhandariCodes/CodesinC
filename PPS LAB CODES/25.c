#include <stdio.h>

int main() {
    int arr[100], n, element, i, position;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter the elements of the sorted array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    position = n; // Assume the new element goes at the end

    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            position = i; // Find the correct position
            break;
        }
    }

    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }

    arr[position] = element; // Insert the new element
    n++; // Increase the size of the array

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
