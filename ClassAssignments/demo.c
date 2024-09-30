#include <stdio.h>

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    // Using left shift to calculate 2n (equivalent to n * 2)
    int two_n = n << 1;

    // Using right shift to calculate 1/(2n) (equivalent to n / 2)
    // For non-zero n, when n is odd, the result is truncated.
    int half_n = n >> 1;

    printf("2 * %d = %d\n", n, two_n);
    printf("%d / 2 = %d\n", n, half_n);

    return 0;
}
