#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
//    int i = 1;
//    // n = 6, 1 + 3 + 5
//    while(i <= n){
//        sum += i;
//        i+=2;
//    }
    for(int i = 1; i<=n; i+=2){
        sum += i;
    }

    printf("%d", sum);
    return 0;
}
