#include<stdio.h>
void printBinary(unsigned int n)
{
    unsigned int i;
    for(i=2147483648;i;i=i/2)
    {
        //printf("%u\n",i&n);

        if(i&n)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
int main()
{
    int i, n;
    scanf("%d",&n);
    n = n >> 4;
    i=1;
    printBinary(n);
    //i=1<<4;
    //printBinary(i);

    if(n&i)
        printf("1");
    else
        printf("0");

    //i = n&1;


    return 0;
}
