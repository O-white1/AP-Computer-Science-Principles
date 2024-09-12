#include <stdio.h>
#include <math.h>

    int num1, num2;
    int sum, dif, prod;
    float avg;
    int big, small;
    int distance;

int main() {
    printf("Enter Number:"); scanf("%d", &num1);
    printf("Enter Number:"); scanf("%d", &num2);

    sum = num1+num2;
    dif = num1-num2;
    prod = num1*num2;
    avg = (num1+num2)/2;
    if (num1 > num2) {
        big = num1;
        small = num2;
    }
    else big = num2, small = num1;
    distance = abs(dif);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", dif);
    printf("Product: %d\n", prod);
    printf("Average: %f\n", avg);
    printf("Distance: %d\n", distance);
    printf("Max: %d\n", big);
    printf("Min: %d\n", small);
}