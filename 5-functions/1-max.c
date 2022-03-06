#include <stdio.h>
#include <math.h>

// function prototype
int maximum(int, int, int);

int main()
{
    int y, x, z;
    scanf("%d%d%d", &y, &x, &z);
    int mx = maximum(y, x, z);
    printf("%d", mx);
}

int maximum(int x, int y, int z)
{
    if (x > y && x > z)
    {
        // x is maximum
        return x;
    }
    else if (y > x && y > z)
    {
        // y is maximum
        return y;
    }
    else
    {
        // z is maximum
        return z;
    }
}
