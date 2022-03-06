#include <stdio.h>
#include "my_header_file.h"

int main()
{
    int n;
    scanf("%d", &n);

    // find the divisor
    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0) // i is divisor of n
        {
            // check if i is a power of 2
            int result = isPowerOf2(i);
            if (result == 1)
            { // i is a divisor of n and power of 2
                printf("%d", i);
                break;
            }
        }
    }

    return 0;
}