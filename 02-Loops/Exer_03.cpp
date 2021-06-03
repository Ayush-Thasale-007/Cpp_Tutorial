#include <iostream>
using namespace std;

// Perfect Numbers

int main()
{
    int i, n, sum;
    cout << "enter the number";
    // cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (2 * n == sum)
        cout << "perfect number";
    else
        cout << "not a perfect number";
    return 0;

    return 0;
}