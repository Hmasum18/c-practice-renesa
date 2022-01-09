#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch); // c

    // converts upper case to lower case
    if(ch>= 'A' && ch <= 'Z'){
        ch = ch + 32;
    }

    printf("%c", ch);

    return 0;
}
