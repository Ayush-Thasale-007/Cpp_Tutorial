#include <iostream>
using namespace std;

// Abstract Classes

// Virtual functions mostly implies that they are there for namesake and for overriding

// When all the functions in Parent class are virtual it is called as Interface or Abstract Class
class Base
{
public:
    virtual void fun() = 0;
    // virtual void func2() = 0;
};

class Derived : public Base
{
public:
    void fun() { cout << "Hello" << endl; }
};

int main()
{
    // Derived der;
    // der.fun();
    Base *ptr = new Derived();
    ptr->fun();
    return 0;
}