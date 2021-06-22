#include <iostream>
using namespace std;

class Base
{
public:
    void fun() { cout << "Fun1 of base" << endl; };
    void fun2();
    void fun3();
};

class Derived : public Base
{
public:
    void fun4() { cout << "Fun4 of Derived" << endl; };
    void fun5();
};

int main()
{
    Derived d;
    Base *ptr = &d;
    ptr->fun();
    // Cannot access this
    // ptr->fun4();

    // Base b;
    // Derived *unptr = &b;

    // Derived b;
    // Base *tptr = &b;

    return 0;
}