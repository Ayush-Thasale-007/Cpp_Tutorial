#include <iostream>
using namespace std;

// Maximum of 3 numbers

int max(int a, int b, int c)
{
    int max;
    if ((a > b) && (a > c))
    {
        max = a;
    }

    else if (b > c)
    {
        max = b;
    }

    else
        max = c;

    return max;
}

int main()
{
    int a = 10, b = 30, c = 20;
    cout << max(a, b, c);
    return 0;
}