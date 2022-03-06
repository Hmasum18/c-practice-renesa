#include <stdio.h>

/**
 * @brief this function takes an integer as input
 * and check if the integer is prime or not
 *
 * @return int value 0 if x is not prime
 * else return 1 if x prime
 */
int isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0; // x is not prime
        }
    }
    //printf("line 19\n");
    return 1; // x is prime
}

int main()
{
    int n;

    while (1)
    {
        scanf("%d", &n);
        if (n == -1)
        {
            break;
        }

        int result = isPrime(n);

        if (result == 1)
        {
            printf("%d is a prime number\n", n);
        }
        else
        {
            printf("%d is not a prime number\n", n);
        }
    }
}