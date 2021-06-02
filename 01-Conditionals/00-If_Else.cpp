#include <iostream>
using namespace std;

int main()
{
    // Checking Larger Of Two Numbers
    int x, y;
    cout << "Enter x : " << endl;
    cin >> x;

    cout << "Enter y : " << endl;
    cin >> y;

    // Just Like C Programming Language
    if (x > y)
    {
        cout << "x Is Greater" << endl;
    }

    else if (x < y)
    {
        cout << "y Is Greater" << endl;
    }
    else if (x == y)
    {
        cout << "x is equal to y" << endl;
    }
    else
        cout << "InValid" << endl;

    return 0;
}
