#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int abs = a<0 ? -a : a;
//    if(a<0)
//        abs = -a;
//    else
//        abs = a;
    printf("absolute value %d is %d",a , abs);
    return 0;
}
