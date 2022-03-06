#include<stdio.h>

int main(){
    /* int p[5] = {0};//= { 1.0, 1.5, 2.4 }; // p[0] -> 1.0, p[1] -> 1.5, p[2] -> 2.4
    p[5] = 5;
    for(int i = 0 ; i< 5; i++){ // i = 0, 1, 2, 3, 4
        printf("p[%d] = %d\n",i, p[i]);
    } */

    /* int p[] = { 4, 5, 3 }; // p[0] -> 1.0, p[1] -> 1.5, p[2] -> 2.4

    for (int i = 0; i < 3; i++)
    { // i = 0, 1, 2, 3, 4
        printf("p[%d] = %d\n", i, p[i]);
    } */

    /* int a[3];

    scanf("%d%d%d",&a[0], &a[1], &a[2]);

    for (int i = 0; i < 3; i++)
    { 
        printf("a[%d] = %d\n", i, a[i]);
    } */

    int n; // size of the array
    scanf("%d", &n);

    int a[n];

    for(int i = 0 ; i < n; i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}