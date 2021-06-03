#include <iostream>
using namespace std;

// Demonstrating Switch Case

int main()
{
    int a, b;
    char choice;

    cout << "Enter a and b" << endl;
    cin >> a >> b;

    cout << "Select an Operation From +,-,*,/" << endl;
    cin >> choice;

    switch (choice)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '/':
        cout << (float)a / b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;

    default:
        break;
    }

    return 0;
}
