int isPowerOf2(int x)
{
    int temp = 1;
    while (temp < x)
    {
        temp *= 2;
    }

    /* if(temp == x){
        return 1; // 1 means x is power of 2
    }else{
        return 0; // 0 means x is not power of 2
    } */

   // return temp == x ? 1 : 0;
    return temp == x;
}