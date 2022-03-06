
// question 2(a)
#include<stdio.h>

int main(){
    // input matrix 1
   int r1, c1; // number of row, number of columns
   scanf("%d%d", &r1, &c1);
   int mat1[r1][c1];
   for(int i = 0 ; i < r1; i++)
        for(int j = 0 ; j< c1; j++)
            scanf("%d", &mat1[i][j]);

    // input matrix 2
   int r2, c2; // number of row, number of columns
   scanf("%d%d", &r2, &c2);
   int mat2[r2][c2];
   for(int i = 0 ; i < r2; i++)
        for(int j = 0 ; j< c2; j++)
            scanf("%d", &mat2[i][j]);

    int result[r1][c2];
    
    if(c1 != r2){
        printf("invalid dimension");
    }
    // init 
    for(int i = 0 ; i < r1; i++){
        for(int j = 0 ; j < c2; j++){
            result[i][j] = 0;
        }
    }
    for(int i = 0 ; i < r1; i++){
        for(int j = 0 ; j< c2 ; j++){
            for(int k = 0 ; k <c1 ; k++){
                result[i][j] = result[i][j] + (mat1[i][k]*mat2[k][j]);
            }
        }
    }
    for(int i = 0 ; i < r1; i++){
        for(int j = 0 ; j < c2; j++){
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }
}
