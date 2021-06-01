#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 4;

    cout << "Addition : " << a + b << endl;
    cout << "Subtraction : " << a - b << endl;
    cout << "Division : " << a / b << endl;
    cout << "Multiply : " << a * b << endl;
    // Typecasting To Get Proper Division
    cout << "Proper Division : " << (float)a / b << endl;

    return 0;
}
