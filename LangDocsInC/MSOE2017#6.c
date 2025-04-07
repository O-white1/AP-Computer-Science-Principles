#include <stdio.h>

int main() {
    int n;
    // for all prime factors up to n, multiply
    // (1+1/p) where p is the prime factor
    printf("Enter Number: "); scanf("%d", n);



    int out = 1;
    for (int lcv = n; lcv > 1;) { // change lcv to skip non primes
        int p;



        out*=(1+1/p);
    }
}
