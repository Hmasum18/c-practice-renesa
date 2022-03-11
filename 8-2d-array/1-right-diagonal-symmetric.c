#include<stdio.h>

int main(){
    int n, m; 
    scanf("%d%d", &n, &m);

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // check symmetric
    int symmetric = 1; 
    for(int i = 0; i< n; i++){
        for (int j = 0; j < (n-1-i); j++)
        {
            int r = n-1-j;
            int c = n-1-i;
            if(a[i][j]!=a[r][c]){
                symmetric = 0;
                break;
            }
        }
        if(!symmetric){
            break;
        }
    }

    if(symmetric){
        printf("matrix is symmetric");
    }else{
        printf("matrix is not symmetric");
    }
}