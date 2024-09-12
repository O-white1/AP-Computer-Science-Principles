#include <stdio.h>

int main() {
    int time1, time2;
    int  hours, minutes;

    printf("Enter Time 1: "); scanf("%d", &time1);
    printf("Enter Time 2: "); scanf("%d", &time2);

    hours =   abs(time1-time2) / 60;
    minutes = abs(time1-time2) % 60;

    printf("Time difference: %d hours, and %d minutes", hours, minutes);


}