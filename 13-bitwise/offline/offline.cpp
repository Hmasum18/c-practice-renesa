#include<iostream>
#include "Biginteger.h"
using namespace std;

int main()
{
    UINT_32 u("00000000000011011001000000111000"); // 888888
    u.Print_bit_str();

    cout << "After 4 bit left lift:" << endl;
    u.ShiftLeft(4); // becomes 55555
    u.Print_bit_str();

    cout << "After 4 bit right lift: " << endl;
    u.ShiftRight(4); // becomes 888880
    u.Print_bit_str();

    cout << "After adding 16: " << endl;
    u.Add(16); // becomes 888896
    u.Print_bit_str();

    cout<<endl;
    cout<<"increment:"<<endl;
    u.Increment();
    u.Print_bit_str();

    cout << endl;
    UINT_32 u1("00000000000011011001000000111000"); /// 888888

    cout<<"After adding another UINT_32:"<<endl;
    u.Add(u1);
    u.Print_bit_str();

    cout << endl;
    cout << "rotation example" << endl;
    UINT_32 u2("00000000000011011001000000111001"); // 888889

    u2.RotateClockwise(4);
    u2.Print_bit_str();

    u2.RotateAntiClockwise(4);
    u2.Print_bit_str();

    cout<<"Operator overloading example"<<endl;
    cout<<endl;
    u2.Print_bit_str();
    u2++;
    u2.Print_bit_str();
    ++u2;
    u2.Print_bit_str();
    u2 = u2 + 10;
    u2.Print_bit_str();
    UINT_32 u3 = u2+u1;
    u3.Print_bit_str();
    u3 = u2<<2;
    u3.Print_bit_str();
    u3 = u2>>2;
    u3.Print_bit_str();

    return 0;
}