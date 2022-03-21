#include <stdio.h>
#include <string.h>

int isStrSame(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int len = len1 < len2 ? len1 : len2;

    for (int i = 0; i < len; i++)
    {
        if(str1[i] < str2[i]){
            return -1;
        }else if(str1[i] > str2[i]){
            return 1;
        }
        // ignore str1[i] == str2[i];
    }

    if(len1<len2){
        return -1;
    }

    if(len1 > len2){
        return 1;
    }

    return 0;
}

int main()
{
    char str1[20], str2[20];
    gets(str1);
    gets(str2);

    int flag = isStrSame(str1, str2);
    //int flag = strcmp(str1, str2);

    printf("flag: %d\n", flag);

    if (flag == 0)
        printf("%s = %s", str1, str2);
    else
        printf("%s != %s", str1, str2);

    return 0;
}
