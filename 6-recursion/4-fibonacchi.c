#include<stdio.h>

int f(int n){
    //printf("f(%d)\n", n);

    if(n==1)
        return 0; // f(1)
    
    if(n==2)
        return 1; // f(2)
    
    return f(n-1) + f(n-2);
}

int main(){
    int result = f(8);

    printf("6th fibonacchi number is = %d", result);
}