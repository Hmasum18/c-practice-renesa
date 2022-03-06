#include <stdio.h>

int main()
{
    int n; // number of students
    scanf("%d", &n);

    int numbers[n];

    // students marks input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int total = 0;
    // find the total marks
    for (int i = 0; i < n; i++)
    {
        total += numbers[i];
    }

    printf("average mark: %f", ((total*1.0)/n));
}