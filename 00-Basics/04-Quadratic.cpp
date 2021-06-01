#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x, y;
    cout << "Enter a, b, c" << endl;
    cin >> a >> b >> c;
    x = (-b + sqrt((b * b) - 4 * a * c) / (2 * a));
    y = (-b - sqrt((b * b) - 4 * a * c) / (2 * a));

    cout << "Root Of " << a << "x^2 + "
         << b << "x "
         << "+ " << c << endl;
    cout << "Roots : " << x << " " << y << endl;

    return 0;
}
