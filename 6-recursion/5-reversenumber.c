#include <stdio.h>

int cntDigit(int n){
    if(n==0) return 0;
    return 1 + cntDigit(n/10);
}

int reverse(int n, int sum)
{
    if(n==0) return sum;
    int r = n%10;
    sum = sum*10 + r;

    return reverse(n/10, sum);
}

void printReverse(int n)
{
    if (n == 0)
        return;
    int r = n % 10;
    printf("%d", r);

    printReverse(n / 10);
}

int main()
{
    printReverse(5413);
    //printf("%d", reverse(5413, 0));
}