#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    unsigned long long sum = 0;

    sum += factorial(3);
    sum += factorial(5);
    sum += factorial(7);
    sum += factorial(9);
    sum += factorial(11);

    printf("The sum of 3! + 5! + 7! + 9! + 11! is: %llu\n", sum);

    return 0;
}
