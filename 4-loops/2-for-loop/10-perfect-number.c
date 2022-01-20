#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    // 6 is a perfect number
    // 6's divisor sum = 1 + 2 + 3 = 6
    // 28, 486, 8128 etc
    int sum = 0;
    for(int i = 1; i<n; i++){
        if(n%i == 0){ // i is a divisor of n
            sum += i;
        }
    }

    if(sum == n){
        printf("%d is a perfect number", n);
    }else{
        printf("%d is not a perfect number", n);
    }

    return 0;
}
