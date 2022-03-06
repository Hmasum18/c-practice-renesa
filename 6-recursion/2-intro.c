#include <stdio.h>

void f(int n)
{
    printf("f n = %d\n", n);
    if (n == -1) // base case
    {
        return;
    }
    f(n - 1);
    printf("r n = %d\n", n);
}

int main()
{
    f(3);
    printf("main ends\n");
}
