#include<stdio.h>

struct student
{
    int id;
    char name[200];
};


int main(){
    int n;

    FILE *fp = fopen("input.txt", "r");
    FILE *fp_out = fopen("output.txt", "w");

    fscanf(fp, "%d", &n);

    printf("number of students: %d\n", n);

    struct student student_list[n];

    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d %s", &student_list[i].id, student_list[i].name);
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(fp_out, "student id: %d, name: %s\n", student_list[i].id, student_list[i].name);
    }

    fclose(fp);
    fclose(fp_out);
}
/*
2
10 abc
15 pqr
*/