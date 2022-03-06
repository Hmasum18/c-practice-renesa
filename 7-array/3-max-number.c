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

    int mx = a[0];
    int mx_idx = 0;

    int i;
    for(i = 1; i < n ; i++){
        if(a[i] > mx){
            mx = a[i];
            mx_idx = i;
        }
    }

    printf("max number %d\n", mx);
    printf("max number is at index: %d", mx_idx);

    return 0;
}