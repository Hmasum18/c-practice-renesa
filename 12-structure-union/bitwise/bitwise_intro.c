#include<stdio.h>

int main()
{
    unsigned int i,j;
    i=11;
    j=5;

    printf("i&j: %u\n",i&j);
    printf("i|j: %u\n",i|j);
    printf("i^j: %u\n",i^j);
    printf("~i: %u\n",~i);
    printf("i>>1: %u\n",i>>1);
    printf("i>>2: %u\n",i>>2);
    printf("i<<1: %u\n", i<<1);
    printf("i<<2: %u\n", i<<3);

    return 0;
}
