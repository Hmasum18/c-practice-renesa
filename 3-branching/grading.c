#include<stdio.h>

int main(){
    int marks;
    scanf("%d", &marks);

    char grade;

    if(marks >= 90) // marks is between 90 and 100
    {
        //printf("Grade A");
        grade = 'A';
    }
    else if(marks >= 80) // 80 to 89
    {
        //printf("Grade B");
        grade = 'B';
    }
    else if(marks >= 70) // 70 to 79
    {
        //printf("Grade C");
        grade = 'C';
    }
    else if(marks >= 60) // 60 to 69
    {
        //printf("Grade D");
        grade = 'D';
    }else{
        //printf("Grade F");
        grade = 'F';
    }

    printf("Your grade is %c", grade);

    return 0;
}
