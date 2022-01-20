#include<stdio.h>

int main()
{
    int n = 0;
    int sum = 0;
    for(; n != -1 ;){
        scanf("%d", &n);
        sum +=n;
        printf("current sum= %d\n", sum);
    }
    return 0;
}
