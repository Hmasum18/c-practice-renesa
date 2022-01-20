#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while(n<0){
        printf("Be positive! Enter a positive number: ");
        scanf("%d", &n);
    }

    printf("Hurrah! You are a positive person!");
    return 0;
}
