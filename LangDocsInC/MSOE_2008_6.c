#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count = 0;

    printf("Enter the first string: ");scanf("%99[^\n]", str1);getchar();
    printf("Enter the second string: ");scanf("%99[^\n]", str2);

    for (int i = 0; str1[i] != '\0'; i++) {
        int j = 0;
        while (str2[j] != '\0' && str1[i + j] == str2[j]) j++;

        if (str2[j] == '\0') {
            count++;
            i += j - 1;
        }
    }


    printf("The substring '%s' appears %d times in the first string.\n", str2, count);
}
// basically strint16