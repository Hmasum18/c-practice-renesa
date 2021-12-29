#include<stdio.h>

int main()
{
    float f;
    f = 5/3;
    printf("5 / 3 = %f\n", f);
    f = 5.0/3; // f = 1.666667
    printf("5 / 3 = %f\n", f);

    int x = (int)5.0/3; // type casting . 5.0/3 = 1.666667 -> type cast -> 1
    printf("x = %d", x); // prints 1
    return 0;
}
