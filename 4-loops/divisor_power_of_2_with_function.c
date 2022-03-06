//Write a C program to find sum of all prime numbers between 1 to n.
#include<stdio.h>

int isPowerOf2(int n)
{
    int powerOf2 = 1; // assume n is a power of 2
    for(int temp = n; temp > 1 ; temp /=2)
    {
        int r = temp%2;
        if(r==1)
        {
            powerOf2 = 0; // n is not power of 2
            break;
        }
    }
    return powerOf2; // 1: n is a power of 2
    // 0: n is not a power of 2
}


int main()
{
    int n;
    scanf("%d",&n);

    for(int d = n; d>=1; d-=1)
    {
        if(n%d==0)   // d is a divisor of n
        {
            printf("%d is a divisor of %d\n", d, n);
            int temp = isPowerOf2(d);
            if(temp == 1)
            {
                printf("%d is the largest divisor which is power of 2\n", d);
                break;
            }
        }
    }
    return 0;
}



