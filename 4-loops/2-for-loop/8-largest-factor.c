#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int cnt = 0;
    for(int i = n-1; i>=1 ; i--){
        cnt++;
        if(n % i == 0){
            printf("Largest factor: %d\n", i);
            break;
        }
    }
    printf("for executed %d times", cnt);
    return 0;
}
