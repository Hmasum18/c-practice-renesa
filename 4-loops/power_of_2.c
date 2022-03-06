//Write a C program to find sum of all prime numbers between 1 to n.
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);

//    for(int i = 1; pow(2, i) <= n; i++){
//        if(pow(2, i) == n){
//            printf("%d is a power of 2, %d = 2^%d", n, n , i);
//            break;
//        }
//    }

    int isPowerOf2 = 1; // assume n is power 2
//    int temp = n;
//    while(temp>1){
//        int r = temp%2;
//        if(r==1){
//            isPowerOf2 = 0; // n is not power of 2
//            break;
//        }
//        temp = temp/2;
//    }

    for(int temp = n; temp > 1 ; temp /=2){
        int r = temp%2;
        if(r==1){
            isPowerOf2 = 0; // n is not power of 2
            break;
        }
    }

    if(isPowerOf2 == 1){
        printf("%d is a power of 2", n);
    }else{
        printf("%d is not a power of 2", n);
    }

    return 0;
}

