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
    unsigned int i, n;
    n=11;
    unsigned int mask = 1 << 32;
    while(n <= mask)
    {
       printBinary(n);
       n= n<<1;
    }

    //i = n&1;


    return 0;
}
