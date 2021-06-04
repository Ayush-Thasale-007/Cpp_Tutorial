#include <iostream>
using namespace std;

// Palindrome Number

int main()
{
    int reverse, rem, n, temp;

    cout << "Enter a number : ";
    cin >> n;
    temp = n; // Temporary Variable
    while (temp > 0)
    {
        rem = temp % 10;              // rem = 4 3 2 1
        temp /= 10;                   // n = 123 12 1 0
        reverse = reverse * 10 + rem; // rev = 4 43 432 4321
    }

    if (reverse == n)
    {
        cout << "Palindrome";
    }

    return 0;
}
