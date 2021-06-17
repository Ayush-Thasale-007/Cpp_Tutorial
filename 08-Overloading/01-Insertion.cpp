#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;
    // Using this it will be ok if u use
    // + instead of c1.add(c2);
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    friend ostream &operator<<(ostream &o, Complex &c1);
};
ostream &operator<<(ostream &o, Complex &c1)
{
    return o << c1.real << " + i" << c1.img;
}

int main()
{
    Complex c1, c2, c3;
    c1.real = 5;
    c1.img = 3;
    c2.real = 7;
    c2.img = 1;

    c3 = c1 + c2;

    cout << c3;

    return 0;
}