#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    int x, y;
    scanf("%d%d", &x, &y);

    int upp = 0;
    int down = 0;
    int right = 0;
    int left = 0;

    printf("adfs %d\n", a[x][y]);
    if (a[x][y] == 1)
    {
        printf("dfsdf\n");
        for (int j = y - 1; j >= 0; j--)
        {
            if (a[x][j] == 1)
            {
                left++;
            }
            else
            {
                break;
            }
        }
        for (int j = y + 1; j < c; j++)
        {
            if (a[x][j] == 1)
            {
                right++;
            }
            else
            {
                break;
            }
        }
        for (int i = x - 1; i >= 0; i--)
        {
            if (a[i][y] == 1)
            {
                upp++;
            }
            else
            {
                break;
            }
        }
        for (int i = x + 1; i < r; i++)
        {
            if (a[i][y] == 1)
            {
                down++;
            }
            else
            {
                break;
            }
        }
        printf("%d %d %d %d\n", upp, down, left, right);
        int min1 = (right < left) ? right : left;
        int min2 = (min1 < upp) ? min1 : upp;
        int min = (min2 < down) ? min2 : down;
        printf("%d ", min);
    }
    else
    {
        printf("-1");
    }
    return 0;
}