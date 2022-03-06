#include<stdio.h>

void func(){
    printf("function\n");
}

void func1(){
    printf("function 1\n");
}

void func2(){
    printf("functon 2\n");
    func1();
}

void func3(){
    printf("function 3 start\n");
    func2();
    printf("function 3\n");
    func();
}

int main(){
    func3();
    printf("main ends\n");
}
