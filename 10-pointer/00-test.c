#include<stdio.h>
#include <string.h>

int contains_any_order(char *s, char *k)
{
    int length1 = strlen(s);
    int length2 = strlen(k);
    //printf("%d %d\n", length1, length2);
    for (int i = 0; i < length2; i++)
    {
        //printf("%c\n", *(k+i));
        int found = 0;
        for (int j = 0; j < length1; j++)
        {
            
            if (*(s + j) == *(k + i))
            {
                //printf("found %c", *(s+j));
                found = 1;
                break;
            }
            
        }
        if (!found)
            return 0;
    }
    return 1;
}
int main()
{
    char x[100], z[100];
    scanf("%s %s", x, z);
    printf("%d", contains_any_order(x, z));
    return 0;
}