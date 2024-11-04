#include <stdio.h>

int main() {
    int arr[100], n, element, i, j;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be deleted: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; // Reduce the size of the array
            break; // Exit the loop after deleting the first occurrence
        }
    }

    printf("Updated array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
