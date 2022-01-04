#include<stdio.h>
#include<math.h> // to access sqrt function

int main()
{
    int x1, y1, x2, y2; // point1(x1, y1) , point2(x2, y2)
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    int dx = x1 - x2;
    int dy = y1 - y2;
    int x = dx*dx + dy *dy;

    double distance = sqrt(x);

    printf("%.2lf", distance);

    return 0;
}
