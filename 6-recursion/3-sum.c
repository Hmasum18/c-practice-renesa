
/*
write a c program that finds the summation of the numbers 
upto n starting from 1 using recursive function.
*/

#include <stdio.h>

int sum(int n){
    // base case
    if(n == 1){
        return n;
    }

    int s = n + sum(n-1);

    return s;
}

int main()
{
    int n; 
    scanf("%d", &n);
    int s = sum(n);
    printf("%d", s);
}
