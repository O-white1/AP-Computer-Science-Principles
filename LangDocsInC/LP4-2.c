#include <stdio.h>

int main() {
    const int     MAX_WEIGHT_KG = 27;
    const int     MAX_VOL = 100000; // 100k
    int           len, wid, height, weight_kg;

    printf("Enter pkg weight in KG: "); scanf("%d", &weight_kg);
    printf("Enter pkg length in cm: "); scanf("%d", &len);
    printf("Enter pkg width  in cm: "); scanf("%d", &wid);
    printf("Enter pkg height in cm: "); scanf("%d", &height);

    int volume = len*wid*height;

    if (!(volume > MAX_VOL) && !(weight_kg > MAX_WEIGHT_KG)) {
        printf("All good to ship pkg!");
    }
    else printf("pkg is either too big or too heavy to ship!");
}