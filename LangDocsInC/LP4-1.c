#include <stdio.h>

int main() {
    int quant;
    double price, total;

    printf("Enter Number of copies purchased: ");
    scanf("%d", &quant);

    if (quant >= 0 && quant <= 99)       price = 0.30;
    if (quant >= 100 && quant <= 499)    price = 0.28;
    if (quant >= 500 && quant <= 749)    price = 0.27;
    if (quant >= 750 && quant <= 1000)   price = 0.26;
    if (quant >= 1000)                   price = 0.25;
    //else                                 printf("Invalid number of copies!");

    total = price * quant;
    printf("Price per copies: %.2f\nTotal price is: %.2f\n", price, total);
}