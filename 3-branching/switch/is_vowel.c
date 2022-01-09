#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
        ch = ch + 32;

    switch(ch){
    case 'a':
        printf("vowel.");
        break;
    case 'e':
        printf("vowel.");
        break;
    case 'i':
        printf("vowel.");
        break;
    case 'o':
        printf("vowel.");
        break;
    case 'u':
        printf("vowel.");
        break;
    default:
        printf("consonant.");
    }


    switch(ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("vowel.");
        break;
    default:
        printf("consonant.");
    }
}
