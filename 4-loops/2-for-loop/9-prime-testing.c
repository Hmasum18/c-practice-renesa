#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int prime = 1; // assume n is a prime
    for(int i = 2; i<n ; i++){
        if(n%i == 0){
            prime = 0; // n is not prime
            break;
        }
    }
    if(prime){
        printf("%d is prime", n);
    }else{
        printf("%d is not prime", n);
    }

    return 0;
}
