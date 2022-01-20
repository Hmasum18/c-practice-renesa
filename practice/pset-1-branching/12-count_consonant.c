#include<stdio.h>

int main(){

    char ch1, ch2;
    scanf("%c%c", &ch1, &ch2);

    int consonant_cnt = 0;

    if(ch1 != 'a' && ch1 != 'e' && ch1!='i' && ch1 != 'o' && ch1 != 'u'){
       consonant_cnt++;
    }

    if(ch2 != 'a' && ch2 != 'e' && ch2!='i' && ch2 != 'o' && ch2 != 'u'){
       consonant_cnt++;
    }

    printf("%d", consonant_cnt);

    return 0;
}
