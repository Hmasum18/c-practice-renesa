#include<stdio.h>

int main()
{
   // char ch;
   // ch = -129; // R = ASCII 82
   // printf("the value of ch: %d\n", ch);


    int a;
    //a = 100.6780; // 1e9

    //printf("%c", a);

    float f; // 4 byte
    f = -3.6798996; // -3.679900
    printf("%.18f\n", f);



    double d; // 8 byt
    d = -3.6798996;
    printf("%.18lf", d);



    return 0;
}
