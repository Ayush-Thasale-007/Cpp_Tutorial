#include <iostream>
using namespace std;

// You can pass in optional argument in C++ using
// data_type identifier  = 0

// You should make default arguments from end
int add(int x, int y, int z = 0)
{
    return x + y + z;
}

int main()
{
    cout << add(3, 5) << endl;
    cout << add(3, 5, 0) << endl;
    // z will take value 8 here
    cout << add(3, 5, 8) << endl;
    return 0;
}