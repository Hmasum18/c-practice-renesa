#include<stdio.h>

int main(){
    int a = 15, b = 19;

    int *p; // = &a;
    p = &a;

    printf("a: %d\n", a);
    printf("&a: %d\n", &a);
    printf("p: %d\n", p);
    printf("&p: %d\n", &p);
    printf("*p: %d\n", *p);

    puts("");
    *p = 30;

    printf("a: %d\n", a);
    printf("&a: %d\n", &a);
    printf("p: %d\n", p);
    printf("&p: %d\n", &p);
    printf("*p: %d\n", *p);

    puts("");
    p = &b;
    printf("p: %d\n", p);
    printf("&p: %d\n", &p);
    printf("*p: %d\n", *p);

    puts("");
    int* p2;
    p2 = p;

    printf("p: %d\n", p);
    printf("*p: %d\n", *p);
    printf("p2: %d\n", p2);
    printf("*p2: %d\n", *p2);

    puts("");
    p = &a;

    printf("p: %d\n", p);
    printf("*p: %d\n", *p);
    printf("p2: %d\n", p2);
    printf("*p2: %d\n", *p2);

    puts("");
    p2 = p+3;
    printf("p: %d\n", p);
    printf("p2: %d\n", p2);
    printf("diff: %d\n", p2-p);
    printf("p2: %d\n", *p2);
}