#include <stdio.h>

int main() {
    int lcv = 2;

    while (lcv <= 36) {
        if ((lcv%2)==0) {
            printf("%d\n", lcv);
            lcv++;
        }
        lcv++;
    }
}