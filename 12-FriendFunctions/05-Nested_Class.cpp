#include <iostream>
using namespace std;

class Outer
{
public:
    int a = 10;
    static int b;

    void fun()
    {
        i.show();
        i.x++;
    }

    void diplayX()
    {
        cout << i.x << endl;
    }

    class Inner
    {
    public:
        int x = 25;
        void show()
        {
            cout << "Show" << endl;
            // Cannot access a
            // cout << a << endl;
            // Can access b
            cout << b << endl;
        }

        // Can access b as it is static
    };
    // Should be made after declaration
    Inner i;
};

int Outer::b = 20;

int main()
{
    Outer out;
    out.fun();
    // Accessible only to the class in which it is nested
    // Inner i;
    out.diplayX();

    Outer::Inner i;
    i.show();
    cout << i.x << endl;

    return 0;
}