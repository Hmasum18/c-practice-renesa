#include<stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    int larger = (x>y) ? x : y;
//    if(x>y){
//        larger = x;
//    }else{
//        larger = y;
//    }

    printf("larger value is %d", larger);
    return 0;
}
