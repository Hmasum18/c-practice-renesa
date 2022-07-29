#include <stdio.h>
#include <string.h>

struct point {
    int x;
    int y;
    char name[80];
} p1, p2;

void printPoint(struct point p) {
    printf("x = %d, y =  %d, name = %s\n", p.x,  p.y, p.name);
    p.x = 100; // no effect in main
    p.y = 200; // no effect in main
}

int main()
{
    printf("sizeof point : %d", sizeof(struct point));
    /* printf("Enter first point (x, y, name): ");
    scanf("%d%d%s", &p1.x, &p1.y, p1.name);
    printf("Enter second point (x, y, name): ");
    scanf("%d%d%s", &p2.x, &p2.y, p2.name);
    printPoint(p1);
    printf("p1: x = %d, y =  %d, name = %s\n", p1.x, p1.y, p1.name);
    printPoint(p2); */
    return 0;
}
