#include<stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    char l = ch - 32;
    //int a = ch; // type conversion
    printf("uppercase:  %c", l);
}
