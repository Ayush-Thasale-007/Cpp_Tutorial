#include <iostream>
using namespace std;

// Function Pointer -> Pointer to a function

int maxim(int x, int y)
{
    return x > y ? x : y;
}

int minim(int x, int y)
{
    return x < y ? x : y;
}

int main()
{
    // Declaration
    int (*fp)(int, int);

    // Assigning
    fp = maxim;

    // Calling
    cout << (*fp)(10, 5) << endl;

    fp = minim;
    cout << (*fp)(17, 12) << endl;
    return 0;
}