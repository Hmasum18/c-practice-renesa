#include <stdio.h>
#include <string.h>

int main()
{
    /* char s[] = "Hello world";

    s[4] = '\0';

    printf("%s\n", s);Hi
    printf("%c", s[8]); */

    // printf("%c", "hello"[1]);

    char str1[20];

    //scanf("%[^\n]", str1);
    //scanf("%s", str1);
    gets(str1);
    //fgets(str1, 19, stdin);

    int len = strlen(str1);
    /* for (int i = 0; i < 20; i++)
    {
        if(str1[i] == '\0'){
            break;
        }
        len++;
    } */
    
    

    printf("length of string \"%s\" is %d", str1, len);
    

    return 0;
}