//Write a C program to find sum of all prime numbers between 1 to n.
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;

    for(int i=2; i<=n; i++)
    {
//assume i is a prime number
        // printf("Checking if %d is prime\n", i);
        int prime=1;
        //check if generated number i is prime or not
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1)
        {
            // printf("%d is prime\n", i);
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}
