/*
Write a c program that take a positive integer n as input and outputs the number of digits of n that
are adjacent to 9.
*/

#include<stdio.h>

int main(){
    int n; // 919959429
    scanf("%d",&n);
    int prev = -1; // previous digit of a digit
    int prev_prev = -1; // digit which is 2 digit right to current digit
    int cnt = 0;
    while(n>0){
        int digit = n%10;
        if(digit == 9){ // if current digit is 9
            if(prev!=-1 && (n/10)!=0 ) // it's not the 1st or last digit
            {
                cnt += (prev_prev==9) ? 1 : 2;
            }else{
                //printf("f/l ");
                cnt += (prev_prev==9) ? 0 : 1;
            }
        }
        //printf("digit: %d, cnt: %d\n", digit, cnt);
        prev_prev = prev;
        prev = digit;
        n/=10;
    }
    printf("%d", cnt);
}
