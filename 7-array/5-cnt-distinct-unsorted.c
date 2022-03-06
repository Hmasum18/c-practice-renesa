#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int j ; 
        for(j = 0 ; j < i; j++){ // 0 .. i - 1
            if(a[j] == a[i]){
                break;
            }
        }
        // if above for loop doesn't break then j = i which means a[i] occurs in between 0 to i-1
        if(i == j){
            cnt++;
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    printf("total distinct number: %d\n", cnt);
}
/*
input
12
4 6 6 4 7 8 10 7 8 10 4 9 
*/