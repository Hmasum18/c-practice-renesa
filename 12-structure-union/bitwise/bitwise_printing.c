#include<stdio.h>

/* int main()
{
    unsigned int i, n;
    n=5;
    //i = n&1;
    unsigned int mask = 1 << 31;
    for(i=mask ; i ; i = i >> 1)//100000000000000000000000
    {
        //printf("%u\n",i&n);

        if(i&n)
            printf("1");
        else
            printf("0");
    }

    return 0;
} */
///i = 01000000 00000000 00000000 00000000
///n = 00000000 00000000 00000000 00001011
///  = 00000000 00000000 00000000 00001011

int main()
{
    unsigned int n = 13;

    unsigned int mask = 1;
    mask = 1<<31;
    int frist_one_found = 0;
    unsigned int temp = n;
    for(int i = 0; i<32; i++){
        //printf("mask: %u %u\n", mask, n&mask);
        if( (n&mask) == 0 ){
            if(frist_one_found == 1)
                printf("0");
        }else{
            frist_one_found = 1;
            printf("1");
        }
        mask = mask >> 1;
        //printf("mask: %u\n", mask);
    }
    return 0;
}

