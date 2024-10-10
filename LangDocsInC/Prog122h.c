//#include <math.h>
int main() {
    for (int lcv = 0; lcv <= 20; lcv++) {
        printf("%d\t%d\t%f\t%d\t%f\n", lcv, (lcv*lcv), (sqrt(lcv)), lcv*lcv*lcv, pow(lcv, 0.25));
    }
}