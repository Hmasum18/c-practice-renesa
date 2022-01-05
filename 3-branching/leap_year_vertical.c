#include<stdio.h>

int main(){
    int year;
    scanf("%d", &year);

    if(year % 400 == 0){
        printf("%d is leap year", year);
    }else if(year % 4 == 0 && year % 100 != 0){
//        if(year % 100 == 0){
//            printf("%d is not leap year", year);
//        }else{
//            printf("%d is leap year", year);
//        }
        printf("%d is leap year", year);
    }else{
        printf("%d is not leap year", year);
    }
}
