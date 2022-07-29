#include<iostream>
//#include "BigInteger.h"
using namespace std;

#include <cstdint>
#include <cstring>

#define SIZE_OF_BYTE 8 // 8 bit = 1 byte
#define INFO_SIZE 128  // 2^7

using namespace std;

typedef uint16_t UINT_16; // 16 bit unsigned integer

UINT_16 get_int_no_of_bits()
{
    /// e.g. 16
    return sizeof(UINT_16) * SIZE_OF_BYTE; // 2*8
}

/*
prints binary representation of an 16 bit interger
for example if e = 14 will be printed as 1110 with some leading zero's
e is the 16 bit integer to be printed in binary representation
 */
void print_uint16_bits(UINT_16 e)
{
    UINT_16 no_of_bits = get_int_no_of_bits(); /// e.g. 16

    for (UINT_16 i = (1 << (no_of_bits - 1)); i != 0; i >>= 1)
    {
        /// extracts MSB digits one after another
        UINT_16 bit_i = ((e & i) != 0);
        cout << bit_i;
    }
}

/*
store substring of s from start index(inclusive) until end index(exclusive)
and stores the subtring in t as a string
 */
void substr(const char *s, int start, int end, char *t)
{

    strncpy(t, s + start, end - start);
    t[end - start] = '\0';
}

/*
convert a 16 bit integer to equivalent bit string(string with 0 and 1 only)
*/
void uint16_to_bit_string(UINT_16 e, char *bits)
{
    UINT_16 no_of_bits = get_int_no_of_bits(); /// e.g. 16
    int bit_idx = 0;

    for (UINT_16 i = (1 << (no_of_bits - 1)); i != 0; i >>= 1)
    {
        /// extracts MSB digits one after another
        UINT_16 bit_i = ((e & i) != 0);
        // cout<<bit_i;
        bits[bit_idx] = bit_i + '0';
        bit_idx++;
    }
    // cout<<endl;
    bits[bit_idx] = '\0';
    // cout<<"bits: "<<bits<<endl;
}

UINT_16 bit_string_to_uint16(const char *bits)
{
    UINT_16 u = 0;

    for (UINT_16 i = 0; i < 16; i++)
    {
        UINT_16 bit_i = bits[i] - '0';

        u = u << 1;
        u = u | bit_i;
    }
    return u;
}

/// Base class that must be inherited, functions of which must be overriden.
class BigInteger
{
private:
    char INFO[INFO_SIZE]; /// Stores some information of the Integer (e.g. size, bit_str etc.) as a string

protected:
    /// Empty Constructor: Stores "?" as information of the Integer
    BigInteger()
    {
        strcpy(INFO, "?");
    }

    /// Parameterized Constructor: Stores the passed string as information of the Integer
    BigInteger(const char *info)
    {
        strcpy(INFO, info);
    }

    ///
    /// The following functions should be overridden in the derived classes.
    ///

    /// Stores the passed bit string as information of the Integer
    /// and does necessary adjustments to the member attributes
    void Set_bit_str(const char *bit_str);

    /// Generates and returns the equivalent bit string of the Integer
    const char *Generate_bit_str();

    /// Shifts the Integer to the Left by k bits
    void ShiftLeft(UINT_16 k);

    /// Shifts the Integer to the Right by k bits
    void ShiftRight(UINT_16 k);

    /// Rotates the Integer Clockwise (to the Left) by k bits
    void RotateClockwise(UINT_16 k);

    /// Rotates the Integer AntiClockwise (to the Right) by k bits
    void RotateAntiClockwise(UINT_16 k);

    /// Adds n to the Integer
    void Add(UINT_16 n);

    /// Increments the Integer by 1
    void Increment();

    /// Prints the equivalent bit string of the Integer. It may need to use Generate_bit_str()
    void Print_bit_str();

public:
    /// Some getters and setters.

    /// Returns the stored information of the Integer as a string
    const char *getInfo()
    {
        return this->INFO;
    }

    /// Copies the stored information of the Integer into the passed string
    void getInfo(char *info)
    {
        //cout<<"getinfo: "<<INFO<<endl;
        //cout<<"length: "<<strlen(INFO)<<endl;
        strcpy(info, INFO);
        //cout<<"info: "<<info<<endl;
    }

    /// Stores the passed string as information of the Integer
    void setInfo(const char *info)
    {
        // cout<<"setting info: "<<info<<endl;
        strcpy(INFO, info);
        //cout << "setting info: " << INFO << endl;
    }
};

/// A class that will be used to model 32 bit unsigned integers.
/// It inherits the BigInteger class.
class UINT_32 : public BigInteger
{
private:
    /// Necessary member attributes to store a 32 bit unsigned integer
    /// using only 16 bit unsigned integers.
    UINT_16 u; //stores leftmost 16bits
    UINT_16 l; //stores rightmost 16bits

public:
    /// - A constructor that takes two UINT_16 parameters and does appropriate works.
    ///  It may need to use a suitable constructor of the parent.
    UINT_32(UINT_16 a, UINT_16 b)
    {
        // convert to bitstring
        char bits_a[17], bits_b[17];
        uint16_to_bit_string(a, bits_a);
        uint16_to_bit_string(b, bits_b);

        char bits_i[33];
        strcpy(bits_i, bits_a);
        strcat(bits_i, bits_b);

        //cout<<"constructor saving: "<<bits_i<<endl;
        Set_bit_str(bits_i); // save as 32 bit info
    }
    /// - A constructor that takes two UINT_16
    /// and one info string as parameters and does appropriate works.
    /// It may need to use a suitable constructor of the parent.
    UINT_32(UINT_16 a, UINT_16 b, char *info) : BigInteger(info)
    {
        u = a;
        l = b;
    }
    /// - A constructor that takes one string of bits as parameter
    /// and does appropriate works. It may need to use a suitable constructor of the parent.
    UINT_32(char *info) : BigInteger(info)
    {
        Set_bit_str(info);
    }

    /// Some getters and setters. =======================
    void set_u(UINT_16 u)
    {
        this->u = u;
    };

    void set_l(UINT_16 l)
    {
        this->l = l;
    };

    void set_ul(UINT_16 u, UINT_16 l)
    {

        this->u = u;
        this->l = l;
    };

    UINT_16 get_u()
    {
        return u;
    };

    UINT_16 get_l()
    {
        return l;
    };

    void get_ul(UINT_16 &u, UINT_16 &l)
    {
        u = this->u;
        l = this->l;
    };

    /// The functions derived from the parent class BigInteger and overriden
    void Set_bit_str(const char *bit_str)
    {
        //cout << "UINT_32::Set_bit_str" << endl;
        setInfo(bit_str); // store bit info into base class

        char bits[17];
        substr(bit_str, 0, 16, bits);
        u = bit_string_to_uint16(bits);

        substr(bit_str, 16, 32, bits);
        l = bit_string_to_uint16(bits);

        //cout<<"u: "<<u<<endl;
        //cout<<"l: "<<l<<endl;
    }

    const char *Generate_bit_str(){
        return getInfo();
    }

    void ShiftLeft(UINT_16 k)
    {
        // cout << "UINT_32::ShiftLeft"<<endl;
        char info[INFO_SIZE];
        getInfo(info);
        // cout << "old info: " << info << endl;
        for (UINT_16 i = 0; i < k; i++)
        {
            // cout<<"i: "<<i<<endl;
            for (UINT_16 j = 31; j > 0; j--)
            {
                // cout<<"info "<<j<<" "<<info[j]<<endl;
                info[j] = info[j - 1];
            }
            info[0] = '0';
        }

        // cout << "new info: " << info << endl;
        Set_bit_str(info);
    }

    void ShiftRight(UINT_16 k)
    {
        // cout << "UINT_32::ShiftRight" << endl;
        char info[INFO_SIZE];
        getInfo(info);
        // cout << "old info: " << info << endl;
        for (UINT_16 i = 0; i < k; i++)
        {
            // cout<<"i: "<<i<<endl;
            for (UINT_16 j = 0; j < 31; j++)
            {
                // cout<<"info "<<j<<" "<<info[j]<<endl;
                info[j] = info[j + 1];
            }
            info[31] = '0';
        }
        // cout << "new info: " << info << endl;
        Set_bit_str(info);
    }

    void RotateClockwise(UINT_16 k){
        char info[INFO_SIZE];
        getInfo(info);

        for (int c = 0; c < k; c++)
        {
            char temp = info[31];
            for (UINT_16 i = 31; i > 0; i--)
            {
                info[i] = info[i - 1];
            }
            info[0] = temp;
        }

        Set_bit_str(info);
    }

    void RotateAntiClockwise(UINT_16 k){
        char info[INFO_SIZE];
        getInfo(info);

        for (int c = 0; c < k; c++)
        {
            char temp = info[0];
            for (UINT_16 i = 0; i < 31; i++)
            {
                info[i] = info[i + 1];
            }
            info[31] = temp;
        }

        Set_bit_str(info);
    }

    void Add(UINT_16 n)
    {
        // cout<<"Add"<<endl;
        // convert n to bit string
        char bits_n[17];
        uint16_to_bit_string(n, bits_n);

        UINT_16 carry = 0;

        char info[INFO_SIZE];
        getInfo(info);
        // cout<<"16: "<<bits_n<<endl;
        // cout<<"old: "<<info<<endl;

        for (UINT_16 i = 15, j = 31; j > 0; j--, i--)
        {
            UINT_16 a = 0;
            if (j >= 16)
            {
                a = bits_n[i] - '0';
            }
            UINT_16 b = info[j] - '0';

            UINT_16 sum = (a + b + carry) % 2;
            info[j] = sum + '0';

            carry = (a + b + carry) / 2;

            // cout <<j<<" b: "<<b<<" a: "<<a<<" c: "<<carry<<" s: "<<sum<< endl;
        }
        // cout << "new: " << info << endl;
        Set_bit_str(info);
    }

    void Increment()
    {
        Add(1);
    }

    void Print_bit_str()
    {
        print_uint16_bits(u);
        print_uint16_bits(l);
        cout << endl;
    }

    /// Adds another UINT_32 to the Integer
    void Add(const UINT_32 &n)
    {
        char info[INFO_SIZE];
        char info_n[INFO_SIZE];

        UINT_32 n_copy(n.u, n.l);
        n_copy.getInfo(info_n);
        getInfo(info);

        //cout<<"a: "<<info<<endl;
        //cout<<"b: "<<info_n<<endl;

        UINT_16 carry = 0;
        for (UINT_16 j = 31; j > 0; j--)
        {
            UINT_16 a = info_n[j] - '0';
            UINT_16 b = info[j] - '0';

            UINT_16 sum = (a + b + carry) % 2;
            info[j] = sum + '0';

            carry = (a + b + carry) / 2;
            // cout <<j<<" b: "<<b<<" a: "<<a<<" c: "<<carry<<" s: "<<sum<< endl;
        }
        // cout << "new: " << info << endl;
        Set_bit_str(info);
    }

    /// BONUS TODO
    /// The following operators must be overloaded:
    ///     shift left (<<)
    ///     shift right (>>)
    ///     postfix increment (e.g. n++)
    ///     prefix increment (e.g. ++n)
    ///     addition (+) with an UINT_16
    ///     addition (+) with another UINT_32
    ///     casting operator uint32_t()
};

/// A class that will be used to model 64 bit unsigned integers. It inherits the BigInteger class.
class UINT_64 : public BigInteger
{
private:
    /// TODO
    /// Necessary member attributes to store a 64 bit unsigned integer 
    /// using only 16 bit unsigned integers.
    UINT_16 a;
    UINT_16 b;
    UINT_16 c;
    UINT_16 d;

public:
    /// - A constructor that takes necessary number of UINT_16 parameters 
    ///and does appropriate works. It may need to use a suitable constructor of the parent.
    UINT_64(UINT_16 a, UINT_16 b, UINT_16 c, UINT_16 d){
        char bits_16[17];
        char bits[INFO_SIZE];

        uint16_to_bit_string(a, bits_16);
        strcpy(bits, bits_16);
        
        uint16_to_bit_string(b, bits_16);
        strcat(bits, bits_16);
        
        uint16_to_bit_string(c, bits_16);
        strcat(bits, bits_16);

        uint16_to_bit_string(d, bits_16);
        strcat(bits, bits_16);

        // cout<<"constructor saving: "<<bits_i<<endl;
        Set_bit_str(bits);
    }
    /// - A constructor that takes necessary number of UINT_16 and one info string as parameters and does appropriate works. It may need to use a suitable constructor of the parent.
    UINT_64(UINT_16 a, UINT_16 b, UINT_16 c, UINT_16 d, char *info):BigInteger(info)
    {
        char bits_16[17];
        char bits[INFO_SIZE];

        uint16_to_bit_string(a, bits_16);
        strcpy(bits, bits_16);

        uint16_to_bit_string(b, bits_16);
        strcat(bits, bits_16);

        uint16_to_bit_string(c, bits_16);
        strcat(bits, bits_16);

        uint16_to_bit_string(d, bits_16);
        strcat(bits, bits_16);

        // cout<<"constructor saving: "<<bits_i<<endl;
        Set_bit_str(bits);
    }
    /// - A constructor that takes one string of bits as parameter and does appropriate works. It may need to use a suitable constructor of the parent.
    UINT_64(const char *info):BigInteger(info)
    {

    }

    /// TODO
    /// Appropriate getters and setters.
    void set_a(UINT_16 a)
    {
        this->a = a;
    };

    void set_b(UINT_16 b)
    {
        this->b = b;
    };


    /// TODO
    /// The functions derived from the parent class that must be overriden:
    ///     void Set_bit_str(const char* bit_str);
    ///     const char* Generate_bit_str();
    ///     void ShiftLeft(UINT_16 k);
    ///     void ShiftRight(UINT_16 k);
    ///     void RotateClockwise(UINT_16 k);
    ///     void RotateAntiClockwise(UINT_16 k);
    ///     void Add(UINT_16 n);
    ///     void Increment();
    ///     void Print_bit_str();

    void Set_bit_str(const char *bit_str)
    {
        // cout << "UINT_64::Set_bit_str" << endl;
        setInfo(bit_str); // store bit info into base class

        char bits[17];
        substr(bit_str, 0, 16, bits);
        a = bit_string_to_uint16(bits);

        substr(bit_str, 16, 32, bits);
        b = bit_string_to_uint16(bits);
        
        substr(bit_str, 32, 48, bits);
        b = bit_string_to_uint16(bits);

        substr(bit_str, 48, 64, bits);
        b = bit_string_to_uint16(bits);
    }

    const char *Generate_bit_str()
    {
        return getInfo();
    }

    void ShiftLeft(UINT_16 k)
    {
        // cout << "UINT_32::ShiftLeft"<<endl;
        char info[INFO_SIZE];
        getInfo(info);
        // cout << "old info: " << info << endl;
        for (UINT_16 i = 0; i < k; i++)
        {
            // cout<<"i: "<<i<<endl;
            for (UINT_16 j = 63; j > 0; j--)
            {
                // cout<<"info "<<j<<" "<<info[j]<<endl;
                info[j] = info[j - 1];
            }
            info[0] = '0';
        }

        // cout << "new info: " << info << endl;
        Set_bit_str(info);
    }

    void ShiftRight(UINT_16 k)
    {
        // cout << "UINT_32::ShiftRight" << endl;
        char info[INFO_SIZE];
        getInfo(info);
        // cout << "old info: " << info << endl;
        for (UINT_16 i = 0; i < k; i++)
        {
            // cout<<"i: "<<i<<endl;
            for (UINT_16 j = 0; j < 63; j++)
            {
                // cout<<"info "<<j<<" "<<info[j]<<endl;
                info[j] = info[j + 1];
            }
            info[63] = '0';
        }
        // cout << "new info: " << info << endl;
        Set_bit_str(info);
    }

    void RotateClockwise(UINT_16 k)
    {
        char info[INFO_SIZE];
        getInfo(info);

        for (int c = 0; c < k; c++)
        {
            char temp = info[63];
            for (UINT_16 i = 63; i > 0; i--)
            {
                info[i] = info[i - 1];
            }
            info[0] = temp;
        }

        Set_bit_str(info);
    }

    void RotateAntiClockwise(UINT_16 k)
    {
        char info[INFO_SIZE];
        getInfo(info);

        for (int c = 0; c < k; c++)
        {
            char temp = info[0];
            for (UINT_16 i = 0; i < 63; i++)
            {
                info[i] = info[i + 1];
            }
            info[63] = temp;
        }

        Set_bit_str(info);
    }

    void Add(UINT_16 n)
    {
        // cout<<"Add"<<endl;
        // convert n to bit string
        char bits_n[17];
        uint16_to_bit_string(n, bits_n);

        UINT_16 carry = 0;

        char info[INFO_SIZE];
        getInfo(info);
        // cout<<"16: "<<bits_n<<endl;
        // cout<<"old: "<<info<<endl;

        for (UINT_16 i = 47, j = 63; j > 0; j--, i--)
        {
            UINT_16 a = 0;
            if (j >= 16)
            {
                a = bits_n[i] - '0';
            }
            UINT_16 b = info[j] - '0';

            UINT_16 sum = (a + b + carry) % 2;
            info[j] = sum + '0';

            carry = (a + b + carry) / 2;

            // cout <<j<<" b: "<<b<<" a: "<<a<<" c: "<<carry<<" s: "<<sum<< endl;
        }
        // cout << "new: " << info << endl;
        Set_bit_str(info);
    }

    void Increment()
    {
        Add(1);
    }

    void Print_bit_str()
    {
        print_uint16_bits(a);
        print_uint16_bits(b);
        print_uint16_bits(c);
        print_uint16_bits(d);
        cout << endl;
    }

    /// Adds another UINT_32 to the Integer
    void Add(const UINT_64 &n)
    {
        char info[INFO_SIZE];
        char info_n[INFO_SIZE];

        UINT_64 n_copy(n.a, n.b, n.c , n.d);
        n_copy.getInfo(info_n);
        getInfo(info);

        // cout<<"a: "<<info<<endl;
        // cout<<"b: "<<info_n<<endl;

        UINT_16 carry = 0;
        for (UINT_16 j = 63; j > 0; j--)
        {
            UINT_16 a = info_n[j] - '0';
            UINT_16 b = info[j] - '0';

            UINT_16 sum = (a + b + carry) % 2;
            info[j] = sum + '0';

            carry = (a + b + carry) / 2;
            // cout <<j<<" b: "<<b<<" a: "<<a<<" c: "<<carry<<" s: "<<sum<< endl;
        }
        // cout << "new: " << info << endl;
        Set_bit_str(info);
    }


    /// BONUS TODO
    /// The following operators must be overloaded:
    ///     shift left (<<)
    ///     shift right (>>)
    ///     postfix increment (e.g. n++)
    ///     prefix increment (e.g. ++n)
    ///     addition (+) with an UINT_16
    ///     addition (+) with another UINT_64
    ///     casting operator uint64_t()
};

// for testing
int toInt(UINT_32 u)
{
    const char *s = u.getInfo();
    unsigned int n = 0;
    for (int i = 0; i < 32; i++)
    {
        int bit_i = s[i] - '0';

        n = n << 1;
        n = n | bit_i;
    }
    cout << s << " = " << n << endl;
    return n;
}

int main(){
    UINT_32 u("00000000000011011001000000111000"); // 888888
    u.Print_bit_str();

    cout<<"After 4 bit left lift:"<<endl;
    u.ShiftLeft(4); // becomes 55555
    //u.Print_bit_str();
    toInt(u);

    cout << "After 4 bit right lift: " << endl;
    u.ShiftRight(4); // becomes 888880
    //u.Print_bit_str();
    toInt(u);

    cout << "After adding 16: " << endl;
    u.Add(16); // becomes 888896
    //u.Print_bit_str();
    toInt(u);

    u.Increment();
    toInt(u);

    cout<<endl;
    UINT_32 u1("00000000000011011001000000111000");/// 888888

    toInt(u);
    toInt(u1);
    u.Add(u1);
    u.Print_bit_str();
    toInt(u);

    cout << endl;
    cout << "rotation example" << endl;
    UINT_32 u2("00000000000011011001000000111001"); // 888889
    toInt(u2);
    u2.RotateClockwise(4);
    u2.Print_bit_str();
    toInt(u2);
    u2.RotateAntiClockwise(4);
    u2.Print_bit_str();
    toInt(u2);

    return 0;
}
