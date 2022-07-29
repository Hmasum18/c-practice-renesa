#include <stdio.h>

struct student
{
    int ID;
    char name[200];
    float marks;
};
int main()
{

    FILE *fp_student = fopen("student_info.txt", "r");

    int number_of_student;
    fscanf(fp_student, "%d", &number_of_student);

    // printf("number of student %d\n",number_of_student);

    struct student student_list[number_of_student];

    for (int i = 0; i < number_of_student; i++)
    {
        fscanf(fp_student, "%d %s", &student_list[i].ID, student_list[i].name /*,student_list[i].marks*/);
    }

    for (int i = 0; i < number_of_student; i++)
    {
        printf("%d %s\n", student_list[i].ID, student_list[i].name);
    }
    fclose(fp_student);
    return 0;
}