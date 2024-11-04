#include <stdio.h>

int main() {
    int n, i;
    int t= 1, sum = 0, inc= 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n); 
    for (i = 1; i <= n; i++) {
        sum += t;        
        t += inc;   
        inc++;         
    }

    printf("Sum of the series up to %d terms is: %d\n", n, sum);

    return 0;
}
