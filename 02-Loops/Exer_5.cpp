#include <iostream>
using namespace std;

// Reverse

int main()
{
    int reverse, rem, n = 1234;

    while (n > 0)
    {
        rem = n % 10;                 // rem = 4 3 2 1
        n /= 10;                      // n = 123 12 1 0
        reverse = reverse * 10 + rem; // rev = 4 43 432 4321
    }

    cout << reverse;

    return 0;
}
