#include<stdio.h>

int main(){
    int n; // assume n is always n>=0
    scanf("%d", &n); // 65892
    //int cnt_digit = 0;

    // generate reverse number
    int reverse_num = 0;
    do{
        int r = n%10; // 0
        reverse_num = reverse_num*10 + r;
        //printf("%d", r); // 0
        n /= 10; // 0
        //cnt_digit++;
    }while(n!=0);
    printf("reversed number: %d\n", reverse_num);


    do{
        int r = reverse_num%10;
        printf("%d ", r);
        reverse_num /= 10;
    }while(reverse_num!=0);
    //printf("\nnumber of digit: %d", cnt_digit);
}

