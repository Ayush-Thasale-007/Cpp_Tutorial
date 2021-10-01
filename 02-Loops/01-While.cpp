#include <iostream>
using namespace std;

// Demonstrating While Loop

int main()
{
    int i = 10;
    // Will Process Till Condition Becomes False
    // This loop will print numbers from 10 to 1 and exit.
    // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1

    while (i != 0)
    {
        if (i == 1)
        {
            cout << i;
        }
        else
            cout << i << ", ";

        // Dont Forget This If U Dont Want Infinite Loop
        i--;
    }

    return 0;
}
