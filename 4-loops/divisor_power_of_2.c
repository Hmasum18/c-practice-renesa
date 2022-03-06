//Write a C program to find sum of all prime numbers between 1 to n.
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int d = n; d>=1; d-=1)
    {
        if(n%d==0)   // d is a divisor of n
        {
            printf("%d is a divisor of %d\n", d, n);
            int isPowerOf2 = 1; // assume d is a power of 2
            for(int temp = d; temp > 1 ; temp /=2)
            {
                int r = temp%2;
                if(r==1)
                {
                    isPowerOf2 = 0; // n is not power of 2
                    break;
                }
            }
            if(isPowerOf2 == 1)
            {
                printf("%d is the largest divisor which is power of 2\n", d);
                break;
            }
        }
    }

//    if(n%2 == 1) // n is a odd number
//    {
//        printf("largest divisor: 1");
//    }else{
//        int largestDivisor = 1;
//        for(int d = n; d>=1; d-=2){
//
//        }
//    }




    return 0;
}


