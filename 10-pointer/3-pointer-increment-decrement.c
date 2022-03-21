#include <stdio.h>

int main()
{
    int a[] = {20, 40, 80, 10};
    int *p = a; // = &a[0];

    (*p)++; // (*p)++ != *p++

    printf("*p: %d\n", *p++); // prints 21
    printf("*p: %d\n", *p); // prints 40

    printf("*p: %d\n", *++p); // prints 80
    printf("*p: %d\n", *p);   // prints 80
}