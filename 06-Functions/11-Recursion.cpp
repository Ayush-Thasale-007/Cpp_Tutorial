#include <iostream>
using namespace std;

// Recursive function ->
// Function which call itself

int fun(int x)
{
    if (x > 0)
    {
        cout << x << " ";
        return fun(x - 1);
    }
    else
        return 0;
}

int rev_fun(int x)
{
    if (x > 0)
    {
        return fun(x - 1);
        cout << x << " ";
    }
    else
        return 0;
}

int main()
{
    int x = 7;
    fun(x);
    rev_fun(x);
    return 0;
}