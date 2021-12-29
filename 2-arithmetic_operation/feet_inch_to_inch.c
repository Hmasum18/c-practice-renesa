#include<stdio.h>

int main()
{
    int feet,inch;
    int result;

    printf("Enter the height:");
    scanf("%d%d", &feet, &inch);

    result = feet * 12 + inch;

    printf("Height in inch: %d", result);
}
