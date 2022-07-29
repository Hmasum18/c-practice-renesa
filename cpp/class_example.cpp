#include<iostream>
using namespace std;

class Test{
    int a;
    int b;
    int *c;
    int *d;
public:
    Test(){
        //c = (int*) malloc(sizeof(int));
        c = new int;
        d = new int[5];
    }

    void setA(int a){ // setter function for a
        this->a = a;
    }

    void setB(int b){ // setter function for b  
        this->b = b;
    }

    void setC(int c){ // setter function for c
        *this->c = c;
    }

    // getter function for a
    int getA(){
        return a;
    }

    // getter function for b
    int getB(){
        return b;
    }

    // getter function for c
    int getC(){
        return *c;
    }

    int* getCP(){
        return c;
    }

    void show(){
        cout << a << " " << b <<" "<<c<< endl;
    }

    Test(const Test& t){
        a = t.a;
        b = t.b;

        c = new int;
        *c = *t.c;

        d = new int[5];
        for (int i = 0; i < 5; i++)
        {
            d[i] = t.d[i];
        }
        
    }

    ~Test(){
        cout<<"inside destructor"<<endl;
        delete c;
        delete [] d;
        cout<<"freed c"<<endl;
        cout<<"freed d"<<endl;
    }
};

void setA(Test t, int a){
    t.setA(a);
}

void show(Test t){
    cout << t.getA() << " " << t.getB() << endl;
}

int main()
{
    Test t;
    t.setA(22);
    t.setB(33);

    show(t);
    return 0;
}
