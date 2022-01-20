#include<stdio.h>

int main(){
    int n; // to print up to nth fibonacci number
    scanf("%d", &n);

    int a = 0, b = 1;
    for(int i = 1; i<=n ; i++){
        if(i == 1){
            printf("%d ", a);
        }else if(i==2){
            printf("%d ", b);
        }else{
            int c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

}
