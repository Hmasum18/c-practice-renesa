/*
 1*1 - 2*2 + 3*3 - 4*4 +.... + (-1)^(n+1)*n*n
*/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;

    int sign = 1;
    // n = 3
    for(int i = 1; i<=n; i++){ // 4 <=3
        int term = sign * i*i; // 1 * 3* 3
        sum += term; // 0 + 1*1 - 2*2 + 3*3
        sign *=-1; // -1
    }

    // sum = 6

    printf("%d", sum);
}
