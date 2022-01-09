#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int largest = (a>=b && a>=c) ? a : (( b>=c && b>=a) ? b : c);
    printf("%d", largest);
}
