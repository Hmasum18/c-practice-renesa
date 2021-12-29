#include<stdio.h>

int main()
{
    double x = 5.67 , y = 8.99;

    double r;

    r = x + y;
    printf("%lf + %lf = %lf\n", x, y, r);

    r = x - y;
    printf("%lf - %lf = %lf\n", x, y, r);

    r = x * y;
    printf("%lf * %lf = %lf\n", x, y, r);

    r = x / y;
    printf("%lf / %lf = %.15lf\n", x, y, r);


    return 0;
}
