#include <iostream>
using namespace std;

class Parent
{

public:
    void display()
    {
        cout << "Display" << endl;
    }
};

class Derived : public Parent
{
public:
    // Overriding
    void display()
    {
        cout << "Display Derived" << endl;
    }
};

int main()
{
    // Function of Derived class is Called
    // Though for Overriding PRototype of Function must be same
    Derived c;
    c.display();

    return 0;
}