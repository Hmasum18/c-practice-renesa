#include<stdio.h>
#include <string.h>

int contains_any_order(char *s, char *k)
{
    int length1 = strlen(s);
    int length2 = strlen(k);
    // printf("%d %d\n", length1, length2);
    for (int i = 0; i < length2; i++)
    {
        // printf("%c\n", *(k+i));
        int found = 0;
        for (int j = 0; j < length1; j++)
        {

            if (*(s + j) == *(k + i))
            {
                // printf("found %c", *(s+j));
                found = 1;
                break;
            }
        }
        if (!found)
            return 0;
    }
    return 1;
}
// return suffix start index
// length if no suffix
int contains_suffix_index(char *s, char *k)
{
    int length1 = strlen(s);
    int length2 = strlen(k);
    // printf("%d %d\n", length1, length2);
    int suffix_idx = length1;
    for (int i = 0; i < length2; i++)
    {

        int found = 0;
        for (int j = length1 - 1; j >= 0; j--)
        {

            if (*(s + j) == *(k + i))
            {
                suffix_idx = j < suffix_idx ? j : suffix_idx;
                found = 1;
                break;
            }
        }
        if (!found)
        {
            // printf("not found %c\n", *(k+i));
            return length1;
        }
    }
    return suffix_idx;
}

int main()
{
    char x[100], z[100];
    scanf("%s %s", x, z);

    printf("%d\n", contains_any_order(x, z));
    int idx = contains_suffix_index(x, z);

    char *p = x;
    for (int i = idx; i < strlen(x); i++)
    {
        printf("%c", *(p + i));
    }
    return 0;
}