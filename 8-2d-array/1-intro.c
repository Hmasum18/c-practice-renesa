#include<stdio.h>

int main(){
    int a[3][2] ;//= { {10, 20},  {3000, 40}, {70, 80} };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
    
}