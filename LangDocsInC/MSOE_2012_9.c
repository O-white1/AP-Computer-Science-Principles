#include <stdio.h>

int romanValue(char r) {
    switch (r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main() {
    char roman[20];
    int value = 0;
    printf("Enter a Roman numeral (up to 3900): ");scanf("%19s", roman);

    for (int i = 0; roman[i] != '\0'; i++) {
        int current = romanValue(roman[i]);
        int next = romanValue(roman[i + 1]);
        value += (next > current) ? -current : current; // ew.
    }

    printf("The integer value is: %d\n", value);
    return 0;
}