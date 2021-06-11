#include <iostream>
using namespace std;

// Functions

/*
    Syntax ->
    return_type function_name( parameters )
    {
        return data;
    }
*/

// If function isnt returning anything then return_type should
// be void

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 3, y = 4;

    cout << sum(x, y);

    return 0;
}