#include <iostream>
using namespace std;

class Your;

class Test
{
private:
    int a;

protected:
    int b;

public:
    int c;
    // This line makes all Variables in This Class Accessible to fun()
    friend void fun();
    // Same you can do with Class
    friend Your;
};

void fun()
{
    Test t;
    // Inaccessible without friend keyword
    t.a;
    t.b;

    // Accessible as it is Public
    t.c;
}

class Your
{
public:
    Test m;
    void funtoo()
    {
        cout << m.a << endl;
    }
};

int main()
{

    return 0;
}  