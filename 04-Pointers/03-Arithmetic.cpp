#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0;
    int *p = &x;
    int *q = &y;

    cout << p << endl;

    // Will actually increment address value by 4
    // as address takes up 4 bytes
    cout << p + 1 << endl;
    cout << p + 2 << endl;
    cout << q - p << endl;

    return 0;
}
