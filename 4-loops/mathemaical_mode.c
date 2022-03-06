#include<stdio.h>

int main(){
    int n; // total numbers
    scanf("%d", &n);

    int a; // represents numbers
    scanf("%d", &a);
    int cnt = 1; // count how many times each number occurs

    int max_cnt = 1;
    int mode = a;

    int last_input = a;

    // input remaining n-1 numbers
    for(int i = 1; i<=n-1; i++){
        scanf("%d", &a);

        if(last_input == a){
            cnt++;
        }else{
            if(cnt >= max_cnt){
                max_cnt = cnt;
                mode = last_input;
            }
            cnt = 1; // start counting for new number
        }

        last_input = a;
    }

    if(cnt >= max_cnt){
        max_cnt = cnt;
        mode = last_input;
    }

    printf("%d", mode);


}
