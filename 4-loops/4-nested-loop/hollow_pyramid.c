#include<stdio.h>

int main(){
    int n = 5;
    scanf("%d", &n);
    int middle_space = 1;
    for(int i = 1; i<=(n-1);i++){
        // print start spaces
        for(int j = 1; j<=(n-i); j++){
            printf(" ");
        }
        printf("*");
        if(i>1){
            for(int j = 1; j<=middle_space; j++){
                printf(" ");
            }
            printf("*");
            middle_space+=2;
        }
        printf("\n");
    }

    for(int i = 1; i<=(2*n-1); i++){
        printf("*");
    }
    return 0;
}

