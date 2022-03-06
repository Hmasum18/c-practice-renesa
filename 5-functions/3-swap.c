#include<stdio.h>

void swap(int* x, int* y){
    // swap
    printf("before swap: %d %d\n", *x, *y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("after swap: %d %d\n", *x, *y);
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("%d %d", a, b);
    return 0;
}
