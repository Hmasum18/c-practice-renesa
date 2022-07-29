#include <iostream>
#include "base.cpp"
using namespace std;

class Rectangle
{
private:
    int width, length; 

public:                // member variable
    void set_width(int w) { width = w; }   // setter
    void set_length(int l) { length = l; } // setter

    int area() { return (width * length); }
};

class Box : public Rectangle
{
    int height;
public:
    void set_height(int h) { height = h; } // setter
    int volume() { 
        return height * area(); 
    }
};


int main(){

    Rectangle rect;
    Box box;

    rect.set_width(3);
    rect.set_length(4);

    box.set_width(4);  // inherited
    box.set_length(4); // inherited
    box.set_height(5);

    cout <<"Rectangle area : "<< rect.area() << endl;
    cout << "Box base area : base area : "<< box.area() << endl; // inherited
    cout <<"Box volume : "<< box.volume() << endl;
    return 0;
}
