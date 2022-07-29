#include <iostream>
#include <cstring>
using namespace std;

class my
{
    char *s;

public:
    my(char *p)
    {
        s = new char[100];
        strcpy(s, p);
    }

    /* my(const my &m){
        s = new char[100];
        strcpy(s, m.s);
    } */

    char *get_s()
    {
        return s;
    }

    void show()
    {
        cout << s << endl;
    }

    ~my(){
        delete [] s;
    }
};

void f(my &a)
{
    strcpy(a.get_s(), "how");
}

int main(){
    my ob("what");
    ob.show();
    f(ob);
    ob.show();
    //delete [] ob.get_s();
   //cout<<"ok"<<endl;
    return 0;
}