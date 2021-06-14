#include <iostream>
using namespace std;

int &fun(int &a)
{
    cout << a << endl;
    return a;
}

int main()
{
    int x = 10;
    // Here u can assign fun(x) as lvalue
    // as it is Reference function and returns a reference
    // So fun(x) is basically x
    fun(x) = 22;
    cout << x << endl;

    return 0;
}