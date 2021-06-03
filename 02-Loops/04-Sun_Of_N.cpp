#include <iostream>
using namespace std;

// Program To Illustrate  Sum Of First N Natural Nos.

int main()
{
    int n, sum = 0;
    cout << "Enter Limit : " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum Of First " << n << " Natural Numbers Is " << sum << endl;

    return 0;
}