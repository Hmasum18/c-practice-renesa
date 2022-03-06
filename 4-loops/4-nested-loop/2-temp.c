#include<stdio.h>

int main()
{
    int n = 5;
    for(int i = 2; i<=n; i++){
        // i = 3
        printf("i = %d\n", i);
        for(int j = 1; j<=10; j++){
            int temp = i * j; // 3 *
            printf("%d * %d = %d\n", i, j, temp);
        }
    }
    return 0;
}

