#include<stdio.h>

int main(){
    int a[2][2] = {{1, 5}, {2}};
    //int **p = a;
    /* printf("%d ", (*a)[1]);
    printf("%d ", *(*a+1)); */
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", &a[i][j]);
        }

        printf("\n");
        
    }
    
    /* int a[] = {1, 2, 4};
    printf("%d\n", *a); */
    
}