#include <stdio.h>
#include <math.h>

int main() {
    for (int x = -12; x <= 16; x++) {
        int y = pow(x, 6) - (3*(pow(x, 5))) - (93*(pow(x, 4))) + (87*(pow(x, 3))) + (1596*(pow(x, 2))) - (1380*x) - 2800;
        printf("%d\t%d\n", x, y);
    }
}