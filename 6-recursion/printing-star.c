// Online C compiler to run C program online
#include <stdio.h>

void print_star(int j){
    if(j==0) return;
    printf("*");
    print_star(j-1);
}

void f(int i){
    if(i==0) return;
    f(i-1);
    print_star(i);
    printf("\n");
}

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    f(n);

    return 0;
}
