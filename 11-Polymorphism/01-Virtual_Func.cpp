#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "Fun of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun()
    {
        cout << "Fun of Derived" << endl;
    }
};

int main()
{
    Derived der;
    // Derived Function will be called
    // der.fun();

    // Function of base will be called
    // Base *ptr = &der;

    // ptr->fun();

    // If u want to call the funtion of derived class you can use
    // keyword virtual

    Base *ptr = &der;

    ptr->fun();

    return 0;
}

/*
            Polymorphism
    So when a pointer of base class is called and a overrided function is called and by using virtual keyword the function of derived class is executed by this we can achieve runtime Polymorphism 

*/