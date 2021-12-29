#include<stdio.h>

int main()
{
    int a, b, c;

//    printf("Enter the value of a: ");
//    scanf("%d", &a);
//
//    printf("Enter the value of b: ");
//    scanf("%d", &b);
    printf("Enter the value of a & b: ");
    scanf("%d %d", &a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    c = a + b;

    printf("%d + %d = %d", a, b, c);

    return 0;
}
