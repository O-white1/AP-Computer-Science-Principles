#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "BigArrayHelper.c"

int main() {
    int nums[20];
    for (int lcv = 0; lcv < 20; lcv++) {
        int val = rand() % (90-20) + 20;
        nums[lcv] = val;
    }
    for (int x: nums) {
        printf("%d", x);
    }
}