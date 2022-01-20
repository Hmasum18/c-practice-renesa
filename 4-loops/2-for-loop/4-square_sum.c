#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // n = 4, 1*1 + 2*2 + 3*3 + 4*4 = 30
    // i = 1,  term = i*i , i++
    int sum = 0;
    //int i = 1;
//    while(i<=n){ // 5 <= 4
//        int term = i*i; // 4 * 4
//        sum += term; // 0 + 1*1 + 2*2 + 3*3 + 4*4 = 30
//        i++; // 5
//    }

    int i;
    // printf("Address of i %d\n", &i);
    for( i = 1;i<=n;i++){
        //printf("Address of i %d\n", &i);
        int term = i*i;
        printf("%d\n", &term);
        sum += term;
    }

    printf("number terms = %d\n", i-1);
    printf("%d\n", sum);
    return 0;
}
