#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int temp = n;
    int rn = 0;


    do{
        int r = temp%10;
        //printf("%d", r);
        rn = rn*10 + r;
        temp /= 10;
    }while(temp>0);

    printf("%d\n", rn);
    if(rn == n){
        printf("%d is palindrome", n);
    }else{
        printf("%d is not palindrome", n);
    }

    return 0;
}
