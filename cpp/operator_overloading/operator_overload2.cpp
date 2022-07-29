// Overload the + relative to coord class
#include <iostream >
using namespace std;
class coord
{
    int x, y; // coordinate values
public:
    coord()
    {
        x = 0;
        y = 0;
    };
    coord(int i, int j)
    {
        x = i;
        y = j;
    }
    void get_xy(int &i, int &j)
    {
        i = x;
        j = y;
    }
    // coord operator +(coord ob2);

    coord operator+(coord ob2)
    {
        coord sum;         // (0, 0)
        sum.x = x + ob2.x; // 10 + 5 = 15
        sum.y = y + ob2.y; // 10 + 3 = 13
        return sum;        // (15, 13)
    }

    coord operator-(coord ob)
    {
        coord diff; // (0, 0)

        diff.x = x - ob.x; // 10 - 5 = 5
        diff.y = y - ob.y; // 10 - 3 = 7
        return diff;       // (5, 7)
    }

    coord operator=(coord ob)
    {
        x = ob.x; // 10
        y = ob.y; // 10
        return *this; // return the object that is assigned
    }
};

int main()
{
    coord o1(10, 10), o2(5, 3), o3;
    int x, y;
    o3 = o1 + o2; // o1.operator+(o2);
    o3.get_xy(x, y);
    cout << "(o1+o2) X: " << x << ", Y: " << y << "\n";

    o3 = o1 - o2; // o1.operator-(o2);
    o3.get_xy(x, y);
    cout << "(o1-o2) X: " << x << ", Y: " << y << "\n";

    //o1 = o1.operator=(o2);
    // o3.operator=(o1);
    o3 = o1 = o2; 

    return 0;
}
