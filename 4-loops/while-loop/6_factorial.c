#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cnt = 1; // initialization
    int sum= 1; // 1 is identity of multiplication operation

    while(cnt <= n){ //condition check
        sum *= cnt;
        cnt++; //increment
    }

    printf("%d!= %d", n, sum);

    return 0;
}




