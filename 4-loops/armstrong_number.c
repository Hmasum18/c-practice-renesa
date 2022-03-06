#include<stdio.h>

int main(){
    int n; // 407, 370, 1634
    scanf("%d", &n);

    int copy_n = n;
    int sum, pwr;

    int numberOfDigit = 0;
    while(copy_n > 0 ){
        copy_n /=10;
        numberOfDigit++;
    }
    sum = 0;
    copy_n = n;
    while(copy_n>0){
        int r = copy_n % 10; // 3
        pwr = 1;
        for(int i = 1; i<=numberOfDigit; i++){
            pwr *= r; // 1*3*3*3*3
        }
        sum += pwr;
        copy_n /= 10;
    }
    if(sum == n){
        printf("%d is an Armstrong number", n);
    }else{
        printf("%d is not an Armstrong number", n);
    }

}
