#include <iostream>
using namespace std;

// This program will convert your entered string hello's value to uppercase.

int main()
{
    string hello = "Hello";

    for (int i = 0; i < hello.length(); i++)
    {
        if ((int)hello[i] >= 97 && (int)hello[i] < 123)
        {
            hello[i] -= 32;
        }
    }

    cout << hello;

    return 0;
}
