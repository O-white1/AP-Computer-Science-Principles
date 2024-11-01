#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer between 1 and 10000: ");
    scanf("%d", &n);
    if (n < 1 || n > 10000) printf("Input out of bounds.\n");

    int original_n = n; // needed due to prior confusion;
    int result = n;
    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            while (n % p == 0) n /= p;
            result -= result / p;
        }
    }
    if (n > 1) result -= result / n;
    printf("φ(%d) = %d\n", original_n, result);
}