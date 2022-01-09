#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cnt = 1;
    int sum = 0; // 0 is identify for addition and substraction

    while(cnt <= n){ //condition check
        sum += cnt;
        cnt++; //increment
    }

    printf("sum= %d", sum);

    return 0;
}



