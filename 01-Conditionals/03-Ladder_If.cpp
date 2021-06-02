#include <iostream>
using namespace std;

// Demonstrating If-Else Ladder

int main()
{
    int day;
    cout << "Enter Day Number : " << endl;
    cin >> day;

    if (day == 1)
    {
        cout << "Monday";
    }

    else if (day == 2)
    {
        cout << "Tuesday";
    }

    else if (day == 3)
    {
        cout << "Wednesday";
    }

    else if (day == 4)
    {
        cout << "Thursday";
    }

    else if (day == 5)
    {
        cout << "Friday";
    }

    else if (day == 6)
    {
        cout << "Saturday";
    }

    else
    {
        cout << "Sunday";
    }

    return 0;
}