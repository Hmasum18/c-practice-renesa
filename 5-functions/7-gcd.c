#include <stdio.h>

int gcd(int a, int b)
{
    int mn = a < b ? a : b;
    int mx = a > b ? a : b;

    for (int i = mn; i >= 1; i--)
    {
        if (mn % i == 0 && mx % i == 0)
        {
            return i;
        }
    }
}

int main()
{
    int n; // total numbers and n>=2
    scanf("%d", &n);

    int a, b, c;
    scanf("%d%d", &a, &b);
    int g = gcd(a, b);

    for(int i = 1; i<=(n-2); i++){
        scanf("%d", &c);
        g = gcd(g, c);
    }

    printf("gcd = %d", g);
}