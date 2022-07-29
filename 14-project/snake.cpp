#include<iostream>
#include <windows.h>
using namespace std;

int snake[15][10] = {0};

void drawBorder(int w, int h){
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if(i==0 || i == h-1 || j == 0 || j == w-1)
                cout<<"#";
            else if(snake[i][j] == 1){
                cout<<"*";
            }else if(snake[i][j] == 2){
                cout<<"%";
            }
            else cout<<" ";
        }
        cout<<endl;
    }

}

void draw(int i){
    system("CLS");
    drawBorder(15, 10);
    cout<<"num: "<<i<<endl;
}

int main(){

    snake[7][4] = snake[7][5] = 1;
    snake[7][6] = 2;
    int n = 0;
    while(1){
        n++;
        //cin>>n;
        draw(n);
        Sleep(17); //refresh after every 17 sec
    }
}
// https://github.com/Adv-learning/Tic-Tac-Toe/
