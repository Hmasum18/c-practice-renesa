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

    // left rotate
    /*
    int temp = a[0];
    for(int i = 0; i< n-1 ; i++) // 0 to n-2
    {
        a[i+1] = a[i]; //a[i] = a[i+1];
    }
    a[n-1] = temp; // a[0]
    */

   
    // right rotate
    int temp = a[n - 1];
    for (int i = n - 1; i > 0; i--) // n-1 down to 1
    {
        a[i] = a[i - 1]; // a[i] = a[i+1];
    }
    a[0] = temp; // a[n-1]

    // print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
/*
12
4 6 6 4 7 8 10 7 8 10 4 9

left rotate: 6 6 4 7 8 10 7 8 10 4 9 4
right rotate:9 4 6 6 4 7 8 10 7 8 10 4
*/