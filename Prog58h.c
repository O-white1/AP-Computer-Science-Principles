#include <stdio.h>
#include <math.h>

int main() {

    double Amount, P, Rate, NumberOfDays, Time;

    printf("Amount"); scanf("%f", &Amount);
    printf("Rate"); scanf("%f", &Rate);
    printf("Time"); scanf("%f", &Time);

    Amount = P* 1+(pow((1+(0.1*Rate)/NumberOfDays), ((NumberOfDays*Time)/365)));

    printf("Amount Saved");
    printf("Interest Rate: ");
    printf("Times compounded per year: ");
    printf("Number of days at Interest");
    printf("The Interest earned is: ");
    printf("Total amount in savings: ");
}