#include <iostream>
using namespace std;

// Access Specifiers

class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    Base(int a = 0, int b = 0, int c = 0);

    void fun()
    {
        a = 20;
        b = 30;
        c = 40;
    }
};

class Derives : Base
{
public:
    void derivedfun()
    {
        // Cannot access Private
        // a = 3;

        // Can access Public
        b = 4;

        // can access public
        c = 7;
    }
};

int main()
{
    Base x;
    // Inaccessible

    // Private
    // x.a;

    // Protected
    // x.b;

    // Public
    x.c;
    return 0;
}