#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 10;
    // Now this is pointer to Constant integer it cannot modify value of x
    const int *ptr = &x;
    // or
    // int const *ptr = &x;
    // *ptr += 1;
    // Here ptr itself is a constant
    int *const ptr2 = &x;
    // Invalid
    // *ptr2++;
    // Invalid
    // ptr2 = &y;
    // In this you cannot modify either
    const int *const ptr2 = &y;
    return 0;
}