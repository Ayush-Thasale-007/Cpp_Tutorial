#include <iostream>
using namespace std;

// Runtime Polymorphism

class Car
{
public:
    // Virtual Keyword to make functions Virtual
    // Pure Virtual Functions if equal to zero
    // MAking them = 0 forces Derived Classes to Override the functions
    virtual void start() = 0;

    virtual void stop() = 0;
};

class BMW : public Car
{
public:
    void start()
    {
        cout << "BMW Started" << endl;
    }

    void stop()
    {
        cout << "BMW Stopped" << endl;
    }
};

class Ferrari : public Car
{
public:
    void start()
    {
        cout << "Ferrari Started" << endl;
    }

    void stop()
    {
        cout << "Ferrari Stopped" << endl;
    }
};

int main()
{
    Car *c = new BMW();
    c->start();

    return 0;
}