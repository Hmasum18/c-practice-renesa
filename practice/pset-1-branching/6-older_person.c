#include<stdio.h>

int main(){
    int b_date1, b_month1, b_year1;
    scanf("%d/%d/%d", &b_date1, &b_month1, &b_year1);

    int b_date2, b_month2, b_year2;
    scanf("%d/%d/%d", &b_date2, &b_month2, &b_year2);

    int older; // 0 -> same age, 1-> person1 is older , 2 ->person2 is older
    if(b_year1 != b_year2){
        older = (b_year1<b_year2) ? 1 : 2;
    }
    else if(b_month1 != b_month2){
        older = (b_month1<b_month2) ? 1 : 2;
    }else if(b_date1 != b_date2){
        older = (b_date1<b_date2) ? 1 : 2;
    }else{
        older = 0;
    }

    if(older == 1){
        printf("Person1 is older");
    }
    else if(older == 2){
        printf("Person2 is older");
    }else{
        printf("Same age.");
    }

    return 0;
}
