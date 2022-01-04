#include<stdio.h>

int main(){
    double x;
    scanf("%lf", &x);

    int f = floor(x);
    // x > 0  (int)(x + 0.5) : (int)(8.6 + 0.5) = (int)9.1 = 9
    // x < 0  (int)(x - 0.5) : int(-8.6 - 0.5) = (int) -9.1 = -9
    int r = round(x);
    int c = ceil(x);

    printf("floor: %d\n", f);
    printf("round: %d\n", r);
    printf("ceil: %d\n", c);

    return 0;
}
