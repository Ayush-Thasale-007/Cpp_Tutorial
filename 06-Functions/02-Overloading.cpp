#include <iostream>
using namespace std;

// You can have different functions with same name is C++
// Not in C Though
// But with different parameters

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

float add(float a, float b, float c, float d)
{
    return a + b + c + d;
}

int main()
{
    cout << add(3, 4) << endl;
    cout << add(2, 2, 3) << endl;
    cout << add(5.2, 1.8, 5.2, 1.8) << endl;

    return 0;
}
