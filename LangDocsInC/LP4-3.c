#include <stdio.h>

int main() {
    int eggs;
    float cost_per_dozen;

    printf("Enter # of eggs: "); scanf("%d", eggs);

    if (eggs > 0 && eggs <= 4)  {cost_per_dozen = 0.50;}
    if (eggs > 4 && eggs <= 6)  {cost_per_dozen = 0.45;}
    if (eggs > 6 && eggs <= 11) {cost_per_dozen = 0.40;}
    if (eggs > 11)              {cost_per_dozen = 0.35;}

    float cost_per_egg = (cost_per_dozen / 12);
    float RemEggsCost = cost_per_egg*(eggs % 12);
    float DozenEggCost = cost_per_dozen*eggs;
    float TotalCost = RemEggsCost + DozenEggCost;


    printf("Total Cost is %f\n", TotalCost);



}