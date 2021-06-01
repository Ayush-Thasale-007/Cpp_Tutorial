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
    // If U Want To Evaluvate Here Use Parenthesis
    int a = 11, b = 9;
    cout << (a | b) << endl;
    return 0;
}
