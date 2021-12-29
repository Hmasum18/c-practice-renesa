#include<stdio.h>

int main()
{
    int x = 5268;

    printf("Enter a value:");
    scanf("%d", &x);

    int d1 = x % 10; // stores 8
    x = x / 10; // store 526

    printf("x = %d, d1 = %d\n", x, d1);

    int d2 = x % 10; // d2 store 6
    x = x / 10; // store 52
    printf("x = %d, d2 = %d\n", x, d2);

    int d3 = x % 10; // d3 stores 2
    x = x / 10; // store 5
    printf("x = %d, d3 = %d\n", x, d3);

    int d4 = x; // d4 stores 5

    printf("output: %d%d%d%d",d1, d2, d3, d4);
}
