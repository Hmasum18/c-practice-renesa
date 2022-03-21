#include<stdio.h>

int main(){
    int a[] = {20, 40 , 80 , 10};

    //int *p = &a[0];
    int *p = a;
    printf("a: %d\n", a);
    printf("&a: %d\n", &a); //
    printf("*a: %d\n", *a);
    

    for (int i = 0; i < 4; i++)
    {
        // printf("%d ", a[i]);
        //printf("a[%d]->%d: %d\n",i, &a[i], a[i]);
        printf("a[%d]->%d: %d\n", i, (a + i), *(a + i));
    }

    puts("");

    for (int i = 0; i < 4; i++)
    {
        //printf("%d ", a[i]);
        printf("(p+%d)->%d: %d\n", i, (p+i), *(p+i));
    }
    
}