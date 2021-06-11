#include <iostream>
using namespace std;

// Pass by Address

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(&x, &y);

    // Se it actually changed the value
    cout << "x = " << x << " "
         << "y = " << y << endl;

    return 0;
}