#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // sort the array
    for (int i = 0; i < n; i++) // 0 to n-2
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                // swap a[i] and a[j]
                int temp = a[i]; 
                a[i] = a[j]; 
                a[j] = temp; 
            }
        }
        
    }

    // print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
/*
6
2 7 4 1 5 3

when i = 0 : 1 7 4 2 5 3
when i = 1 : 1 2 4 7 5 3
*/