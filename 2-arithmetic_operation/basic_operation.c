#include<stdio.h>

int main()
{
    int x = 20, y = 7;

    scanf("%d%d", &x, &y);

    int s = x+y;
    printf("%d + %d = %d\n", x, y, s); // s = 27

    s = x - y; // s = 20 - 7 = 13
    printf("%d - %d = %d\n", x, y, s);

    s = x * y; // now s = 140
    printf("%d * %d = %d\n", x, y, s); // prints 140

    s = x / y; // s = 20/7 = 2
    printf("%d / %d = %d\n", x, y, s);

    s = x % y; // s = 20 % 7 = 6
    printf("%d %% %d = %d\n",x , y, s);

    return 0;
}
