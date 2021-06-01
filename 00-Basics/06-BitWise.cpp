#include <iostream>
using namespace std;

int main()
{
    int x, y, AND, NOR;
    x = 75;
    y = 7;
    // AND
    AND = x & y;
    NOR = ~x;

    cout << AND << endl;
    // cout << x & y << endl; : Not Valid
    cout << NOR << endl;
    return 0;
}
