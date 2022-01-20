#include<stdio.h>

int main(){

    int i = 5;// main block's
    //printf("%d\n", &i);
    printf("i = %d\n", i);

    {
        //int i = 6; //
        printf("This is a 2nd block: %d\n", i);

        {
            int i = 12;
            //printf("%d\n", &i);
            printf("This is 3rd block : %d\n", i);
        }
        //printf("%d\n", &i);

        printf("This is a 2nd block: %d\n", i);
    }

    printf("i = %d\n", i);


    return 0;
}
