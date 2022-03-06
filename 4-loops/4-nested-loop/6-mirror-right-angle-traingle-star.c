#include<stdio.h>

int main(){
    int n = 4;
    scanf("%d", &n);
    for(int i = 1; i<=n;i++){
        // print spaces
        for(int j = 1; j<=(n-i); j++){
            printf(" ");
        }
        // prints stars
        for(int j = 1; j<=i; j++){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
