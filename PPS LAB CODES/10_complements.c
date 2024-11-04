#include <stdio.h>

int main() {
    unsigned int num, one_comp, two_comp;

    printf("Enter an unsigned integer: ");
    scanf("%u", &num);

    one_comp = ~num;
    two_comp = one_comp + 1;

    printf("1's complement of %u is: %u\n", num, one_comp);
    printf("2's complement of %u is: %u\n", num, two_comp);

    return 0;
}
