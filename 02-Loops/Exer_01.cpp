#include <iostream>
using namespace std;

// Factorial

int main()
{
    int n, fact = 1;
    cout << "Enter A Number : " << endl;
    cin >> n;

    if (n == 0)
    {
        cout << 1;
    }
    else if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }

    else
        cout << "Invalid";

    cout <<"Factorial : "<< fact;

    return 0;
}