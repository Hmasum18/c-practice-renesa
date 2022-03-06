#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // sort the array
    for(int i = 0; i< n; i++){
        int mn = a[i];
        int mn_idx = i;
        for(int j = i; j< n; j++){
            if(a[j] < mn){
                mn = a[j];
                mn_idx = j;
            }
        }

        // let say i = 1 now
        // mn_idx = 3
        // so a[i] -> 7 , a[mn_idx] -> 2
        // swap a[i] and a[mn_idx]
        int temp = a[i]; // save 7 to temp
        a[i] = a[mn_idx]; // save 2 to a[1]
        a[mn_idx] = temp; // a[3] = 7
    }

    // print the array
    for(int i = 0 ; i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
/*
6
2 7 4 1 5 3

when i = 0 : 1 7 4 2 5 3
when i = 1 : 1 2 4 7 5 3
*/