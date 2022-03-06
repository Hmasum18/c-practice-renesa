#include<stdio.h>



int main()
{
    int x,n=17;
    scanf("%d",&x);
    double nominator=1;
    double denominator=1;
    double sum=0;
    int sign=1;

    for(int i=1; i<=n; i++)
    {
        double term=(sign*nominator*1.0)/denominator;
        sum+=term;
        nominator*=x;
        denominator*=i;
        sign*=(-1);
    }
    printf("%lf",sum);
    return 0;
}
