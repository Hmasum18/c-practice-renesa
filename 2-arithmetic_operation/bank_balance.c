#include<stdio.h>
#include<math.h>

int main()
{
    int balance;
    float rate;

    printf("Enter initial balance: ");
    scanf("%d", &balance);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    int n;
    printf("Enter year: ");
    scanf("%d", &n);

    float bn = balance*pow(1+rate, n); // balance * (1+r)^n

    printf("Balance after %d year : %f", n, bn);
}
