#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // int cnt = 0; // for even
    int cnt = 1; // for odd number

    int while_cnt = 0;

    while(cnt <= n){ //condition check
        printf("%d\n", cnt);
        cnt+=2; //increment
        while_cnt++;
    }

    printf("while executed %d times", while_cnt);

    return 0;
}


