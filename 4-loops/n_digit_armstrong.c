#include<stdio.h>

int main()
{
    int n; // number of digit
    scanf("%d", &n);

    int start = 1;
    int end = 1;

    // start = 10^(n-1)
    for(int i= 1; i<n; i++)
    {
        start *= 10;
    }

    // end = 10^n - 1;
    for(int i = 1; i<=n; i++)
    {
        end *= 10;
    }
    end -= 1;


    int cnt = 0; // counts number of arm strong numbers

    for(int i = start; i<= end; i++)  // i represents every n digit number
    {
        // check is i an armstrong number or not
        int copy_i = i;
        int sum, pwr;

        sum = 0;
        while(copy_i>0)
        {
            int r = copy_i % 10;

            pwr = 1;
            // r^n
            for(int j = 1; j<=n; j++)
            {
                pwr *= r;
            }
            sum += pwr;
            copy_i /= 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
            cnt++;
        }
    }

    printf("Count= %d", cnt);
}
