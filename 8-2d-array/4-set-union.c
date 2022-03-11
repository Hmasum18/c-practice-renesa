#include <stdio.h>

int main()
{
    int s1; // size of set1 1
    scanf("%d", &s1);
    int set1[s1];
    for (int i = 0; i < s1; i++)
    {
        scanf("%d", &set1[i]);
    }

    int s2; // size of set2
    scanf("%d", &s2);
    int set2[s2];
    for (int i = 0; i < s2; i++)
    {
        scanf("%d", &set2[i]);
    }

    // union find
    int setU[s1 + s2];

    // insert set1
    int i = 0;
    for (; i < s1; i++)
    {
        setU[i] = set1[i];
    }

    // inset set2
    for (int j = 0; j < s2; j++)
    {
        int seen = 0; // not seen
        // check if set2[j] exists in set1
        for (int k = 0; k < s1; k++)
        {
            if (set2[j] == set1[k])
            {
                seen = 1;
                break;
            }
        }
        if (!seen) // seen == 0
        {
            setU[i] = set2[j];
            i++;
        }
    }

    for(int j = 0; j<i; j++){
        printf("%d ", setU[j]);
    }
    
}