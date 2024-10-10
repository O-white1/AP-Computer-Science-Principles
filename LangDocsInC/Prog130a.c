#include <stdio.h>

int FunkyFresh(int n);

// recursion?
int main() {
    int input = 0;
    printf("Enter number: ");
    scanf("%d", &input);
    FunkyFresh(input);
}

int FunkyFresh(int n) {
    if (n <= 1) return 1;
    if (n%2 == 0) {printf("%d is even, half is: %d\n", n, n/2);    FunkyFresh(n/2);}      // even
    else          {printf("%d is odd, 3n+1 = %d\n", n, (3*n)+1);   FunkyFresh((3*n)+1);} // odd
}
