#include <iostream>
using namespace std;

int main()
{
    string tue = "tuesday";
    string::iterator it;

    // Modifying the iterator will modify the string also
    // as it is an iterator

    for (it = tue.begin(); it < tue.end(); it++)
    {
        *it -= 32;
    }

    cout << tue << endl;

    // Reverese Iterating a String
    string tue2 = "Tuesday";
    string::reverse_iterator rit;
    for (rit = tue2.rbegin(); rit < tue2.rend(); rit++)
    {
        cout << *rit;
    }

    return 0;
}