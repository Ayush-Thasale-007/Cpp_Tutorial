#include <iostream>
using namespace std;
// The difference between the const and #define is this is Pre-Compiled Process
// and wont take up any memory
#define y 10

int main()
{
    const int x = 10;
    // Will give an error as It is UnModifyable
    // x++;

    return 0;
}