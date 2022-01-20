#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int cnt = 0;
    for(int i = 2; i<=n; i++){
        cnt++;
        if(n%i == 0){
            printf("smallest factor other than 1: %d \n", i);
            break;
        }
        printf("%d is not a factor\n", i);
    }
    printf("for executed %d times", cnt);
    return 0;
}

