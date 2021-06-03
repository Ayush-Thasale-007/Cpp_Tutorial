#include <iostream>
using namespace std;

/*
    for( initialization, Condition, Updation)
    {
        process
    }

*/

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;

    // You Can Skip Initialization
    int j = 0;
    for (; j < 10; j++)
    {
        cout << j + 1 << " ";
    }
    cout << endl;

    // You Can Even Skip Updation
    int k = 0;
    for (; k < 10;)
    {
        cout << k + 1 << " ";
        k++;
    }

    // You Can Even Skip Condition
    // But It Will Give Infinite Loop Can Be Stopped By Break
    /*
    for (;;)
    {
        // code
    }
    */
    cout << endl;
    int l = 0;
    for (;;)
    {
        cout << l + 1 << " ";
        l++;
        if (l == 10)
            break;
    }

    return 0;
}