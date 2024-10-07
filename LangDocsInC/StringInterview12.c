#include <stdio.h>
#include <string.h>

#define arr_len(array) (sizeof(array) / sizeof(array[0]))

int main() {
    char **str[] = {""};
    printf("Enter the string: "); scanf("%s", &str);

    char **myArray[] = strtok(str, " ");
    char **myArray2[arr_len(myArray)];

    for (int i = 0; i < arr_len(myArray); i++) {
        myArray2[i] =  myArray[arr_len(myArray) - 1 - i];
        printf("%s", myArray2[i]);
    }


}
// const char *strings[] = {"one","two","three"};