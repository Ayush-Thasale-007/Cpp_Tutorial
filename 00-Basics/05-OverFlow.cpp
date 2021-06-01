#include <iostream>
#include <limits>
#include <cstdint>
using namespace std;

int main()
{
    // Overflow
    // Final Value That c Can Store
    char c = 127;

    // Increment One
    c++;

    // TypeCasted To 1 And Goes to -128 In Cyclic Way
    cout << (int)c << endl;

    // For Some Reason Doesnt Work Here

    // INT_MAX : Prints Maximum Integer Value
    // int last_int = INT32_MAX;

    // cout << (int)last_int << endl;

    return 0;
}
