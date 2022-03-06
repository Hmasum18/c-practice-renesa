#include<stdio.h>

int search(int a[], int n , int x){
    // binary search x
    int start = 0;
    int end = n - 1;

    int idx = -1; // not found

    while (start <= end){
        int mid = (start + end) / 2;
        if (a[mid] == x){
            idx = mid;
            break;
        }
        else if (a[mid] < x){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return idx;
}

int main(){
    int option;
    int a[10000]; // predefined large array
    int n = 0; // number of elements in the array

    // infinite loop
    while(1){
        printf("Enter option: ");
        scanf("%d", &option);
        if(option == 1){
            // take input
            printf("Enter number of elements: ");
            scanf("%d", &n);
            for(int i = 0; i< n;i++){
                scanf("%d", &a[i]);
            }
        }else if(option == 2){
            // display
            if(n == 0){
                printf("Array is empty\n");
                continue;
            }
            printf("Displaying the array: ");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
        }else if(option == 3){
            // sorting
            // sort the array
            for (int i = 0; i < n; i++) // 0 to n-2
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[j] < a[i])
                    {
                        // swap a[i] and a[j]
                        int temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            printf("Array sorted successfully.\n");
        }else if( option == 4){
            // insert
            int x;
            printf("Enter a number: ");
            scanf("%d", &x);
            int i = 0;
            while(a[i]<x && i<n){
                i++;
            }
            n++; //increase the size of the array
            if(i == n){
                a[i] = x;
            }else{
                // right shift the elements
                for(int j = n ; j>i ; j--){
                    a[j] = a[j-1];
                }
                a[i] = x;
            }
            printf("%d inserted successfully.\n", x);
        }else if(option == 5){
            // append
            int x;
            printf("Enter a number: ");
            scanf("%d", &x);
            a[n] = x;
            n++;
            printf("%d appended successfully.\n", x);
        }else if (option == 6){
            // delete
            int x;
            printf("Enter a number: ");
            scanf("%d", &x);
            int idx = search(a, n, x); // binary search x in the array

            if(idx == -1){
                printf("%d was not found.\n", x);
            }else{
                // delete x by left shifting the array
                for(int i = idx; i<n;i++){
                    a[i] = a[i+1];
                }

                n--; // decrease the size of the array;
            }

            printf("%d deleted successfully\n",x);
        }else if(option == 7){
            // search
            // delete
            int x;
            printf("Enter a number: ");
            scanf("%d", &x);
            int idx = search(a, n, x);

            if (idx == -1)
            {
                printf("%d was not found.\n");
            }
            else
            {
                printf("%d was found at index %d.\n", x, idx);
            }
        }
        else if(option == 8){
            printf("Exiting...\n");
            break;
        }
    }
}