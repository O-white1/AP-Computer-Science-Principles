#include <stdio.h>

int main() {
    float rad;
    const float PI = 3.14159;
    float circ;
    float area;

    printf("Enter Radius: "); scanf("%f", &rad);
    circ = 2*PI*rad;
    area = PI*(rad*2);

    printf("Area: %f \n", area, "Circumference: %f", circ);
}