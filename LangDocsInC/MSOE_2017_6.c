#include <stdio.h>

int isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if ((n % i == 0) && (i != n))
            return 1;
    }
    return 0;
}

int main() {
    int num = 0;
    printf("Enter Number: "); scanf("%d", &num);
    if (num>1) {
        int out = 0;
        int[num] used;
        for (int lcv = 0; lcv <= num; lcv++) {
           if (isPrime(lcv)) printf("%d", lcv);
        }
    }
}
