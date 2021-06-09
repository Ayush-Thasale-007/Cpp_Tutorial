#include <iostream>
using namespace std;

// String Iterator

int main()
{
    string hello = "Hello";
    string::iterator it;
    // So basically it is a iterator pointer to the string 
    // hello.begin() - Points to first element of string
    // hello.end() - Points to last element of string
    for (it = hello.begin(); it != hello.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}