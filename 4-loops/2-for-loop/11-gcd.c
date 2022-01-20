#include<stdio.h>

int main(){
    int a, b, mn;
    scanf("%d%d", &a, &b);

    mn = a < b ? a : b;

    for(int i = mn; i>=1 ; i--){
        if(a%i == 0 && b%i == 0){
            printf("GCD of %d and %d is %d", a, b, i);
            break;
        }
    }
}
