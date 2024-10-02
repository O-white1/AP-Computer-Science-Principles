#include <stdio.h>
#include <string.h>

int main() {
    char* string = "";
    char* string2 = "";

    printf("Enter a sentence: "); scanf("%s", &string);
    printf(strtok(string, " "));

}