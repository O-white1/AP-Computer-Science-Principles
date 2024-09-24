#include <stdio.h>
#include <math.h>

int main() {
    int time1, time2, hours, minutes;

    printf("Enter Time 1: "); scanf("%d", &time1);
    printf("Enter Time 2: "); scanf("%d", &time2);


    int TimeOneHours =   time1 / 100;
    int TimeOneMinutes = time1 % 100;
    int TimeTwoHours =   time2 / 100;
    int TimeTwoMinutes = time2 % 100;

    int DifHours =   abs(TimeOneHours   - TimeTwoHours);
    int DifMinutes = abs(TimeOneMinutes - TimeTwoMinutes);




    printf("Time difference: %d hours, and %d minutes", DifHours, DifMinutes);
}
