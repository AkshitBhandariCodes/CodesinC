#include <stdio.h>

int main() {
    int num, rev = 0, original,r;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
       r = num % 10;
        rev = rev * 10 +r;
        num /= 10;
    }

    printf("Reversed number: %d\n", rev);

    if (original == rev)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
