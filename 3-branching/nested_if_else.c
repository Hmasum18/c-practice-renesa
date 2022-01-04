#include<stdio.h>

int main(){

    int a;
    scanf("%d", &a);

    if( a <=100){
        printf("%d is less than or equal 100\n", a);

        if(a<=10){
            printf("%d is less than or equal 10\n", a);
        }else{
            printf("%d is between 10 and 100\n",a);
        }

    }else{
        printf("%d is greater than 100", a);

        if(a>=200){
            printf("%d is greater than 200", a);
        }else{
            printf("%d is between 100 and 200", a);
        }

    }

    return 0;
}
