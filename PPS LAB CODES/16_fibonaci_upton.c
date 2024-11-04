#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm, i = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    while (i <= n) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        i++;
    }

    return 0;
}
