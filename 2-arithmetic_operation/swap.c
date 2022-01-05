#include<stdio.h>

int main()
{
    int n1, n2, temp;
    scanf("%d%d", &n1, &n2);
    printf("before swap: %d %d\n", n1, n2);

    temp = n1; // temp stores the value of n1
    n1 = n2;
    n2 = temp;

    printf("after swap: %d %d", n1, n2);
    return 0;
}
