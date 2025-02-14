#include <stdio.h>

int main() {
    int a = 29;
    int b = 15;
    int c;

    c = a & b;
    printf("%d\n", c);

    c = a | b;
    printf("%d\n", c);

    c = a ^ b;
    printf("%d\n", c);

    c = ~a;
    printf("%d\n", c);

    c = a << 2;
    printf("%d\n", c);

    c = b >> 2;
    printf("%d\n", c);

    int x = 0b11001010;
    x &= 0b11000010;
    printf("%d\n", x);

    x |= 0b00000100;
    printf("%d\n", x);

    x ^= 0b01000000;
    printf("%d\n", x);

    x &= 0b00011100;
    int y = x >> 2;
    printf("%d\n", y);

    int m = 5;
    int n = 9;
    int packed = (n << 8) | m;
    printf("%d\n", packed);
}
