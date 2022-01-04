#include<stdio.h>

int main(){

    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        if(a>c){ // a>b, a>c
            if(b>c){
                printf("%d is 2nd largest\n", b);
            }else{
                printf("%d is 2nd largest\n", c);
            }
        }else{
           printf("%d is 2nd largest\n", a);
        }
    }else{
        if(b>c){
            if(a>c){
                printf("%d is 2nd largest\n", a);
            }else{
                printf("%d is 2nd largest\n", c);
            }
        }else{
            printf("%d is 2nd largest\n", b);
        }
    }

    return 0;
}
