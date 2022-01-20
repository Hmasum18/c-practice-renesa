#include<stdio.h>

int main(){
    int n; // assume n is always n>=0
    scanf("%d", &n); // 65892
    int cnt_digit = 0;

    // while loop gives wrong output for n = 0
//    while(n!=0){
//        int r = n%10; // 6
//        printf("%d", r); // 29856
//        n /= 10; // 0
//        cnt_digit++;
//    }

    do{
        int r = n%10; // 0
        printf("%d", r); // 0
        n /= 10; // 0
        cnt_digit++;
    }while(n!=0);

    printf("\nnumber of digit: %d", cnt_digit);
}
