#include<stdio.h>

int main(){
    int m; // number of rows
    int n; // number of cols
    scanf("%d%d", &m, &n);
    
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        } 
    }

    int x, y; // input i, j
    scanf("%d%d", &x, &y);


    if(a[x][y] != 1){ // center of plus is not 1
        printf("-1");
        return 0;
    }

    int up= 0, down = 0, left = 0, right = 0;

    // cnt up 1
    for(int i = y-1; i>=0; i--){
        if(a[x][i] == 0){
            break;
        }
        up++;
    }
    // cnt down 1
    for (int i = y+1; i < n; i++)
    {
        if (a[x][i] == 0)
        {
            break;
        }
        down++;
    }
    // cnt left 1
    for (int i = x-1; i >=0 ; i--)
    {
        if(a[i][y]==0){
            break;
        }
        left++;
    }
    // cnt right 1
    for (int i = x+1; i < m; i++)
    {
        if (a[i][y] == 0)
        {
            break;
        }
        right++;
    }

    int mn = up;
    mn = mn < up ? mn : up;
    mn = mn < down ? mn : down;
    mn = mn < left ? mn : left;
    mn = mn < right ? mn : right;

    if(mn==0){
        printf("-1");
    }else{
        printf("%d", mn);
    }
}