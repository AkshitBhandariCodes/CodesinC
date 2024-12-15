#include <stdio.h>

void main() {
    int x = 100;       // Variable x initialized to 100
    int *p1;           // Pointer to an integer
    int **p2;          // Pointer to a pointer to an integer
    int ***p3;         // Pointer to a pointer to a pointer to an integer
    int ****p4;        // Pointer to a pointer to a pointer to a pointer to an integer

    p1 = &x;           // p1 holds the address of x
    p2 = &p1;          // p2 holds the address of p1
    p3 = &p2;          // p3 holds the address of p2
    p4 = &p3;          // p4 holds the address of p3

    // Printing the values and addresses step by step
    printf("p1 = %p, *p1 = %d\n", p1, *p1);          // p1 points to x, *p1 gives the value of x
    printf("p2 = %p, *p2 = %p, **p2 = %d\n", p2, *p2, **p2); // p2 points to p1, *p2 gives p1, **p2 gives x
    printf("p3 = %p, *p3 = %p, **p3 = %p, ***p3 = %d\n", p3, *p3, **p3, ***p3); // p3 points to p2
    printf("p4 = %p, *p4 = %p, **p4 = %p, ***p4 = %p, ****p4 = %d\n", p4, *p4, **p4, ***p4, ****p4); // p4 points to p3
}
