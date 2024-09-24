#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float Amount, P, Rate, NumberOfDays, Time; // %f = float, %lf = double

    printf("Amount"); scanf("%f", &P);
    printf("Rate"); scanf("%f", &Rate);
    printf("Time"); scanf("%f", &Time);

    Amount = P * (1+(pow((1+(0.1*Rate)/NumberOfDays), ((NumberOfDays*Time)/365))));

    printf("Number of days at Interest");
    printf("The Interest earned is: ");
    printf("Total amount in savings: ");
}