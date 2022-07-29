#include <stdio.h>
#include <string.h>

struct point {
    int x;
    int y;
    char name[80];//string
};

int main()
{
    struct point p1;
    p1.x = 10;
    p1.y = 15;
    strcpy(p1.name, "Point1");

    struct point p2 = {5, 5,  "Point2"}; //x , y , name

    printf("%d %d %s\n", p1.x,  p1.y, p1.name);
    printf("%d %d %s\n", p2.x,  p2.y, p2.name);
    struct point p3 = {5, 10, "C"};


    return 0;
}
