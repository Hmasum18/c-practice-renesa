#include<stdio.h>

int c(int n, int r){
    if( r == 0 || n == r) // nC0 or nCr
        return 1;
    return c(n-1, r) + c(n-1, r-1);
}

int main(){
    printf("%d", c(4, 2));
}