#include <iostream>
using namespace std;

// Nested If-Else Sentences
int main()
{
    // Program To Check Digit (Upto 3rd Digit) and +/-
    int x;
    cout << "Enter A Number : " << endl;
    cin >> x;

    if (x >= 0)
    {
        if (x < 10)
        {
            cout << "Number Is Positive And One Digit" << endl;
        }

        else if (x < 100)
        {
            cout << "Number Is Positive And Two Digits" << endl;
        }

        else if (x < 1000)
        {
            cout << "Number Is Positive And Three Digits" << endl;
        }
    }

    if (x < 0)
    {
        if (x > -10)
        {
            cout << "Number Is Negative And One Digit" << endl;
        }

        else if (x > -100)
        {
            cout << "Number Is Negative And Two Digits" << endl;
        }

        else if (x > -1000)
        {
            cout << "Number Is Negative And Three Digits" << endl;
        }
    }

    return 0;
}