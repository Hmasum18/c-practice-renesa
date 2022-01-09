#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    switch(x%2){
    case 0:
        printf("even\n");
        break;
    case 1:
        printf("odd\n");
        break;
    }

    return 0;
}
