#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student      
{
    int id;
    char name[255];
    float *marks;
};

struct online
{
    int id;
    int totalMarks;
};

void sort(float *a, int length){
    for(int i = 0; i<length-1; i++){
        for(int j = i; j < length; j++){
            if(a[i]<a[j]){
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void save_best_three(FILE *fp, struct student s, int total_online){
    sort(s.marks, total_online);
    fprintf(fp, "%d %s ", s.id, s.name); // save name and idS
    for (int i = 0; i < 3; i++)
    {
        float mx = s.marks[i];
        if( (mx-(int)mx) == 0.0 ){ //example: print 10.0 as 10 in the file
            fprintf(fp, "%.0f ", mx);
        }else{
            fprintf(fp, "%.1f ", mx);
        }
    }  
    fprintf(fp, "\n");
}


int main()
{
    FILE *fp_student = fopen("student_info.txt", "r");
    FILE *fp_online = fopen("online_info.txt", "r");
    FILE *fp_marks = fopen("marks.txt", "r");

    // task1: read from student_info.txt ===================================

    int number_of_student;
    fscanf(fp_student, "%d", &number_of_student);

    //printf("number of student %d\n", number_of_student);

    struct student student_list[number_of_student];

    for (int i = 0; i < number_of_student; i++)
    {
        fscanf(fp_student, "%d %s", &student_list[i].id, student_list[i].name);
    }
    //end of task 1=======================================

    // task 2 : read from online.txt ==================================
    int number_of_online;
    fscanf(fp_online, "%d", &number_of_online);

    //printf("Total online: %d\n", number_of_online);

    struct online online_list[number_of_online];

    for (int i = 0; i < number_of_online; i++)
    {
        fscanf(fp_online, "%d %d", &online_list[i].id, &online_list[i].totalMarks);
    }
    // end of task 2 =============================================

    // task 3 ====================================================
    for (int i = 0; i < number_of_student; i++)
    {
        student_list[i].marks = malloc(number_of_online*sizeof(float));
    }
    
    // marks
    float total_marks = 0.0;
    for (int i = 0; i < number_of_online; i++)
    {
        int id; 
        fscanf(fp_marks, "%d", &id);
        for (int j = 0; j < number_of_student; j++)
        {
            char m[100];
            fscanf(fp_marks, "%s", m);
            float mark;
            if (strcmp(m, "A") == 0)
            {
                mark = 0;
            }
            else if (strcmp(m, "C") == 0)
            {
                mark = -10;
            }
            else
            {
                int temp = atoi(m); // convert string to integer
                int total = online_list[id - 1].totalMarks;
                mark = ((temp*1.0f) / (total*1.0f)) * 10.0f;
            }
            total_marks += mark;
            student_list[j].marks[id-1] = mark;
        }
    }
    // end of task 3 ========================

    // task4 ==================================
    FILE* fp_best3 = fopen("best3.txt", "w");
    for (int i = 0; i < number_of_student; i++)
    {
        save_best_three(fp_best3, student_list[i], number_of_online);
    }
    // end of task4
    
    // task 5 ===============
    float avg_marks = total_marks / (number_of_student*1.0f);

    for (int i = 0; i < number_of_student; i++)
    {
        float total = 0.0;
        struct student s = student_list[i];
        for (int i = 0; i < number_of_online; i++)
        {
            total += s.marks[i];
        }
        
        if(total < avg_marks){
            printf("%s\n", s.name);
        }
    }
    // end of task 5
    

    fclose(fp_student);
    fclose(fp_online);
    fclose(fp_marks);
    fclose(fp_best3);
}