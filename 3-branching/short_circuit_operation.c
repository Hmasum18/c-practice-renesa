#include<stdio.h>

int main()
{
    int a = 2, b = 5 , c = 24;
    printf("%d %d %d\n", a , b, c); // 2 5 0
//    if( (a = 0) && (b = 10) && (c = 5) ){
//        printf("ok\n");
//    }else{
//        printf("not ok\n");
//    }

    if( (a = 0) || (b = 10) || (c = 5) ){
        printf("ok\n");
    }else{
        printf("not ok\n");
    }
    printf("%d %d %d", a , b, c); // 0 10 24
}
