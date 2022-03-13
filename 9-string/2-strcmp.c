#include <stdio.h>
#include <string.h>

int isStrSame(char str1[], char str2[]){
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            if (str1[i] != str2[i])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    char str1[20], str2[20];
    gets(str1);
    gets(str2);

    //int same = isStrSame(str1, str2);
    int flag = strcmp(str1, str2);

    if (flag == 0)
        printf("%s = %s", str1, str2);
    else
        printf("%s != %s", str1, str2);

    return 0;
}
