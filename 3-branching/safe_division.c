#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a,&b);
    if(b==0){
        printf("You can't divide a number by zero.\n");
        printf("Error! b = 0.");
    }
    else{
        int d = a/b;
        printf("integer division of %d and %d = %d", a,b, d);
    }

    return 0;
}
