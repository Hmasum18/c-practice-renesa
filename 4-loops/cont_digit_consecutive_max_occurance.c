#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int d;
    scanf("%d", &d);

    int cnt = 0; // counts each consecutive occurrence of digit d
    int max_cnt = 0; // counts maximum number of occurrence of digit d

    while(n>0)
    {
        int r = n%10;

        if(r==d)
        {
            cnt++;
        }
        else
        {
            if(cnt>max_cnt)
            {
                max_cnt = cnt;
            }
            cnt = 0; // start counting from 0 for next occurrence of d
        }

        //printf("%d %d %d\n", r, cnt, max_cnt);

        n/=10;
    }

    if(cnt>max_cnt){
        max_cnt = cnt;
    }

    printf("%d", max_cnt);

}

