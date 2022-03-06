#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    //printf("%d\n", x);
    int cnt = 0;

    // n = 12
    for(int i = 2; i<=n ; i++){ //step-1: generate the number that can be a factor of n
        //step-2: check if i is a factor of n
        if(n%i == 0){
             // step-3: check if i is prime
            int prime = 1;
            for(int j = 2; j<i; j++){
                    if( i%j == 0){
                      prime = 0;
                      break;
                    }
            }
            if(prime == 1){
                printf("%d ", i);
                cnt++;
            }
        }
    }
    printf("\ntotal primes factors: %d", cnt);
    return 0;
}



