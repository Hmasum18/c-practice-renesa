// Overload the + relative to coord class
# include <iostream >
using namespace std ;

class coord
{
    int x, y; // coordinate values
public:
    coord() // default constructor
    {
        x =0;
        y =0;
    };
    coord(int i, int j)
    {
        x=i;
        y=j;
    }
    void get_xy(int &i, int &j)
    {
        i=x;
        j=y;
    }
    coord add(coord obj1, coord obj2);

};

coord coord::add(coord obj1, coord obj2){
    coord sum;
    sum.x = obj1.x + obj2.x;
    sum.y = obj1.y + obj2.y;
    return sum;
}

int main ()
{
    coord o1(10, 10), o2(5, 3), o3;
    
    o3 = o3.add(o1,o2);

    //o3 = o1 + o2;
    int x, y;
    o3.get_xy(x, y);
    cout << "(o1+o2) X: " << x << ", Y: " << y << "\n";
    return 0;
}
