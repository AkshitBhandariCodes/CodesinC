#include <stdio.h>

int ackermann(int m, int n);

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x >= 0 && y >= 0) {
        printf("Ackermann function for %d and %d gives %d\n", x, y, ackermann(x, y));
    } else {
        printf("Both numbers must be non-negative.\n");
    }

    return 0;
}

int ackermann(int m, int n) {
    if (m == 0)
        return n + 1;
    else if (m > 0 && n == 0)
        return ackermann(m - 1, 1);
    else if (m > 0 && n > 0)
        return ackermann(m - 1, ackermann(m, n - 1));
}
