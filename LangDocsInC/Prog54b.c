#include <stdio.h>
int main() {
    int num1, num2, num3, num4;
    int sum;
    float avg;

    printf("Enter Number 1: "); scanf("%d", &num1);
    printf("Enter Number 2: "); scanf("%d", &num2);
    printf("Enter Number 3: "); scanf("%d", &num3);
    printf("Enter Number 4: "); scanf("%d", &num4);

    sum = num1 + num2 + num3 + num4;
    avg = (float)sum / 4;

    printf("Sum: %d \n", sum);
    printf("Average: %f \n", avg);

    return 0;
}