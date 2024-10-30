#include <math.h>

int main() {
    int num;
    printf("Enter Integer"); scanf("%d", num);
    if (IsPrime(num)) printf("It's Prime!");
    else              printf("It's not Prime");

}
bool IsPrime(int n) {
    for (int lcv = 1; lcv<= n; lcv++) {
        for (int lcv2 = 1; lcv<=n; lcv++) {
            if ((lcv*lcv2)==2) return true;
        }
    }
    return false;
}