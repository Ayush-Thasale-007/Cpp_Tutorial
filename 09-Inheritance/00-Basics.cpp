#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    void show()
    {
        cout << x << endl;
    }
};

// Inheritance -> To get Properties of other clas
// and also add more to it

// class:public ParentClass

class Derived : public Base
{
public:
    int y;
    void display()
    {
        // See here x is not a part of this class but still
        // can be accessed coz of Parent class
        cout << x << " " << y << endl;
    }
};

int main()
{
    Derived d;
    d.x = 10;
    d.y = 6;

    d.show();
    d.display();

    return 0;
}