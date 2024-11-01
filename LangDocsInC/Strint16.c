#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count = 0;
    int j = 0;

    printf("Enter the first string: "); scanf("%99[^\n]", str1);getchar();
    printf("Enter the second string: ");scanf("%99[^\n]", str2);
    // not 100% sure what getchar() fixes but tutorialspoint said its useful and it works so... :)
    for (int i = 0; str1[i] != '\0'; i++) {
        j = 0;
        while (str2[j] != '\0' && str1[i + j] == str2[j]) j++;

        if (str2[j] == '\0') {
            count = 1;
            break;
        }
    }
    printf("The second string is %scontained within the first string.\n", count ? "" : "not ");
}