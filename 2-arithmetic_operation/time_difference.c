#include<stdio.h>

int main()
{
    int h1, m1;

    printf("Enter the 1st time: ");
    //scanf("%d%*c%d", &h1, &m1);
    scanf("%d:%d", &h1, &m1); // ignores the colon between two %d

    int h2, m2;

    printf("Enter the 2nd time: ");
    scanf("%d:%d", &h2, &m2);

    //int time1 = h1*60 + m1; // time1 in minute
    //int time2 = h2*60 + m2;
    int diff = (h1*60 + m1) - (h2*60 + m2);//time1 - time2;

    printf("Difference between time: %d", diff);
    return 0;
}
