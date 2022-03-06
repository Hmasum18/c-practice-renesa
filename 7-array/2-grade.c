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

    for (int i = 0; i < n; i++)
    {

        if (numbers[i] >= 80 && numbers[i] <= 100)
        {
            printf("%dth student got A grade\n", i);
        }
        else if (numbers[i] >= 60)
        { // 60 to 79
            printf("%dth student got B grade\n", i);
        }else{ // 0 to 59
            printf("%dth student got F grade\n", i);
        }
    }
}