#include <iostream>
using namespace std;

// Exception handling is important in Functions

int division(int x, int y)
{
    if (y == 0)
    {
        throw 7;
    }
    return x / y;
}

int main()
{
    int a = 10, b = 0, c;

    try
    {
        c = division(a, b);
        cout << c << endl;
    }
    catch (int e)
    {
        cerr << "Divison by zero" << endl;
    }

    return 0;
}
