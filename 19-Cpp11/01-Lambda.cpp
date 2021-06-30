#include <iostream>
// #include <stdlib.h>
// #include <cstdlib>
using namespace std;

int main()
{
    // [capture_list](parameter_list)->returnType{body};
    int a = 10;
    int b = 7;
    []()
    { cout << "Hello" << endl; };

    int x = [](int x, int y) -> int
    {
        return x + y;
    }(10, 5);

    cout << x << endl;

    [&a, &b]()
    {
        cout << ++a << " " << ++b << endl;
    }();

    return 0;
}