#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    //printf("%d\n", x);
    int cnt = 0;
    for(int n = 2; n<=x ; n++){
        // check if n is prime
        //printf("n = %d\n", n);
        int prime = 1; // assume n is prime
        for(int i = 2; i<n; i++){
                if( n%i == 0){
                  prime = 0; // not prime
                  break;
                }
        }
        if(prime == 1){
            printf("%d ", n);
            cnt++;
        }
    }
    printf("\ntotal primes: %d", cnt);
    return 0;
}


