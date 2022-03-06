#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0 ; i< n;i++){
        scanf("%d", &a[i]);
    }

    int cnt = 1;

    for(int i = 1; i<n;i++){
        if(a[i] != a[i-1]){
            cnt++;
        }
    }

    printf("total distinct number: %d\n", cnt);
}
/*
input
12
4 4 6 7 7 7 8 9 10 10 10 10
*/