#include <iostream>
using namespace std;

// Pass by Value

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(x, y);

    // Wont swap as function is terminated
    // and as it is call by value   
    cout << "x = " << x << " "
         << "y = " << y << endl;

    return 0;
}