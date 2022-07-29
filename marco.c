#include<stdio.h>

#define test(i, x) (i%2)? x : x/2

main(){
    int i;
    float f, value;
    scanf("%d %f", &i, &f);
    value = test(i, f); // -> value = i%2? f : f/2;
    printf("%f\n", value);
}