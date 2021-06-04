#include <iostream>
using namespace std;

// Amstrong Number
// eg : 153 Because 1^3 + 5^3 + 3^3 = 153

int main()
{
    int n, temp, rem, arms = 0;
    cin >> n;
    temp = n; // 153
    while (temp != 0)
    {
        rem = temp % 10;         // rem = 3, 5, 1
        arms += rem * rem * rem; // arms = 27, 125, 1
        temp /= 10;              // 15, 5, 0
    }

    if (arms == n)
    {
        cout << "Armstrong";
    }

    return 0;
}