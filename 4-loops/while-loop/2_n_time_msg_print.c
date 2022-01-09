#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cnt = 0;

    while(cnt < n){
        printf("Hello Renesa!\n");
        cnt++;
    }

    printf("while loop executed %d times", cnt);

    return 0;
}
