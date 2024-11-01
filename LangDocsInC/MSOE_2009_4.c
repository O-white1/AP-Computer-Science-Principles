#include <stdio.h>
#include <math.h>

int main() {
    double a, b, n, area = 0.0;

    printf("Enter the lower bound (a): ");scanf("%lf", &a);
    printf("Enter the upper bound (b): ");scanf("%lf", &b);
    printf("Enter the number of panels (n): ");scanf("%lf", &n);

    double width = (b - a) / n;

    for (int i = 0; i < n; i++)
        area += sin(a + i * width) * width;

    printf("Area under the curve: %.4f\n", area);
}
