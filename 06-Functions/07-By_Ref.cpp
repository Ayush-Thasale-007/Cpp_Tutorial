#include <iostream>
using namespace std;

// Pass by Reference


/*
    So when reference is used a seperate activation record isnt created for Swap
    rather it is created inside main only ( sort of Copied ) and the extra variable
    temp is visible till swap finishes its exection
*/
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}