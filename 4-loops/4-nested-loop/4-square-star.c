#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);


    // generate rows
    for(int i = 0; i<n ; i++){
        // print starts in each column
        for(int j = 0 ; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
