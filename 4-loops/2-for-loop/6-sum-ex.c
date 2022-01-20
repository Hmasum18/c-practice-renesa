#include<stdio.h>

int main()
{
    int x, n;
    scanf("%d%d", &x, &n);

    double sum = 0;

    double x_i = 1.0; // x^0
    double fact_i = 1.0; // 0!
    for(int i = 0 ; i<=n; i++){ // 2 <= 4
        //printf("x^%d = %lf, %d! = %lf\n",i, x_i, i,fact_i);
        double term = (1.0*x_i) / fact_i; // x^0/0!
        //printf("%lf\n", term);
        sum += term;

        x_i *=x; // x^1
        fact_i *=(i+1); // 1!
    }

    printf("%.9lf", sum);
}
