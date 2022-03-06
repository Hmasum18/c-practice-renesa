#include<stdio.h>

int main(){
    // 1st matrix input
    int m1, n1;
    printf("Enter matrix dimentions(m1 n1): ");
    scanf("%d%d", &m1, &n1);

    int a[m1][n1];

    printf("Enter 1st matrix: \n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    if(m1 != n1){
        printf("array is not symmetric.");
        return 0;
    }

    // check smmetric
    int symmetric = 1; // assume matrix is symmetric

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < (n1-i-1); j++)
        {
            if(a[i][j] != a[j][i]){
                symmetric = 0;
                break;
            }
        }
        
    }

    if(symmetric){
        printf("array is symmetric.");
    }else{
        printf("array is not symmetric.");
    }
    
}