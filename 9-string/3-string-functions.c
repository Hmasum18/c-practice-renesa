#include <stdio.h>
#include <string.h>

void toLowerCase(char s[])
{
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            // s[i] = s[i] + 32;
            s[i] = 'a' + s[i] - 'A';
        }
    }
}

void toUpperCase(char s[])
{
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // s[i] = s[i] + 32;
            s[i] = 'A' + s[i] - 'a';
        }
    }
}

void reverseString(char s[])
{
    int len = strlen(s);

    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

void stringCpy(char s1[], char s2[]){
    int len = strlen(s2);

    for (int i = 0; i < len; i++)
    {
        s1[i] = s2[i];
    }
}

void strinCat(char str1[], char str2[]){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    int len = len1 + len2;

    for (int i = len1, j=0; i < len; i++, j++)
    {
        str1[i] = str2[j];
    }
    
}

int main()
{

    char s[100], s1[100];
    gets(s);

    // strlwr(s);
    // toLowerCase(s);

    // strupr(s);
    // toUpperCase(s);

    // reverse a string =============
    // strrev(s);
    // reverseString(s);

    // copy a strint to another string ==========
    //strcpy(s1, s); // copy s to s1
    //stringCpy(s1, s);
    //strncpy(s1, s, 5); // copy 1st 3 character of s to s1

    // concatenate 2 string 
    gets(s1);
    //strcat(s1, s1);
    //strinCat(s, s1);
    strncat(s, s1, 3);

    // puts(s);
    // puts(s1);
    printf("s: %s\n", s);
    printf("s1: %s\n", s1);

    return 0;
}