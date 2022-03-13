#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    char str[20];

    gets(str);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        printf("%c\n", str[i]);
        Sleep(1000); // 0.5 sec
    }
    

    return 0;
}