#include <stdio.h>
int main() {
    int len;
    int wid;
    
    printf("Type width: \n");     scanf("%d", &len);
    printf("Type length: \n");     scanf("%d", &wid);
    printf("Area is: %d \n", len*wid);
    printf("Perimeter is: %d \n", (len*2) + (wid*2));
    
    return 0;
}