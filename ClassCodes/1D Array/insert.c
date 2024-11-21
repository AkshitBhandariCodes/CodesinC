#include <stdio.h>
void main(){
    int a[30],x,loc,i,n;
    printf("Enter the number of elements for the array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the elements to be inserted");
    scanf("%d",&x);
    printf("Enter the index value to place the element (0-based index): ");
    scanf("%d", &loc);

    // Validate the index
    if (loc < 0 || loc > n) {
        printf("Invalid index. Exiting.\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > loc; i--) {
        a[i] = a[i - 1];
    }

    // Insert the new element
    a[loc] = x;

    // Increment the size of the array
    n++;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
