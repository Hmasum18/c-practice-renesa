#include<stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);

    char grade; // 0 - 100

    if(marks>= 90 && marks <= 100){
        grade = 'A';
        printf("Grade A\n");
    }

    if(marks>=80 && marks <90){ // 80 to 89
        grade = 'B';
        printf("Grade B\n");
    }

    if(marks>=70 && marks <80){
        grade = 'C';
        printf("Grade C\n");
    }

    if(marks >= 60 && marks <= 69){
        grade = 'D';
        printf("Grade D\n");
    }

    if(marks >= 0 && marks < 60){
        grade = 'F';
        printf("Grade F\n");
    }

    printf("Your grade is %c", grade);

    return 0;

}
