#include <iostream>
using namespace std;

float fun()
{
    return 2.5f;
}

int main()
{
    auto x = 2 * 5.7 + 'a';
    auto f = fun();
    // To enforce type
    int a1 = 10;
    float a2 = 90.5;

    decltype(a2) z = 7;
    cout << x << endl;
    cout << z << endl;

    return 0;
}