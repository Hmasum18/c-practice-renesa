#include<stdio.h>

int main(){
    // 1st matrix input
    int m1, n1;
    printf("Enter 1st matrix dimentions(m1 n1): ");
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

    // 2nd matrix input
    int m2, n2;
    printf("Enter 2nd matrix dimentions(m2 n2): ");
    scanf("%d%d", &m2, &n2);

    int b[m2][n2];

    printf("Enter 2nd matrix: \n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }

    // check if multiplication is possible
    if(n1 != m2){
        printf("Invalid dimensions!");
        return 0;
    }

    // declare resulting matrix
    int c[m1][n2]; // by definition resulting matrix will be a m1*n2 matrix

    // initialize the resultant matrix
    for (int i = 0; i < m1; i++)
    {
        for (int  j = 0; j < n2; j++)
        {
            c[i][j] = 0;
        }
        
    }
    
    // mutlitply the A and B matrix
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            //c[i][j] = 0;
            for (int k = 0; k < n1; k++) // you can use k < m2
            {
                c[i][j] += a[i][k]*b[k][j];
            }
            
        }
    }

    // print the result
    printf("resultant matrix: \n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}