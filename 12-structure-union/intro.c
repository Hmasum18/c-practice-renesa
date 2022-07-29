#include<stdio.h>

struct Date
{
    int month;
    int date;
    int year;
} date1;

/* typedef struct
{
    int month;
    int date;
    int year;
}Date; */


typedef long long int LL;// %lld

int main(){
    
    struct Date date2 = {4, 11, 2022}; // month , date, year

    /* date.month = 4;
    date.date = 1;
    date.year = 2022; */
    /* scanf("%d %d %d", &date1.date, &date1.month, &date1.year);

    printf("date is %d/%d/%d\n", date1.date, date1.month, date1.year); */

    /* date2.date = 4;
    date2.month = 11;
    date2.year = 2022; */

    printf("date is %d/%d/%d\n", date2.date, date2.month, date2.year);
}