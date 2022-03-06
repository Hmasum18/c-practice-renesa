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

    int x; 
    scanf("%d", &x);

    // binary search x
    int start = 0;
    int end = n-1;

    int idx = -1; // not found
    
    while(start <= end){
        int mid = (start + end) / 2;
        if(a[mid] == x){
            idx = mid;
            break;
        }else if(a[mid]< x){
            start = mid + 1;
        }else{
            end = mid -1;
        }
    }

    if(idx != -1){
        printf("%d is found at index %d", x, idx);
        
    }else{
        printf("%d is not found", x);
    }
    return 0;
}
/*
7
11 13 17 25 37 55 58
37
*/