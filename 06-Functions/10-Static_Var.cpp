#include <iostream>
using namespace std;

// Unlike auto variables it is actually
// available throughout the Program execution

void fun()
{
    // see static variable value will increase
    static int st = 10;
    int a = 10;
    st++;
    a++;
    cout << "st = " << st << endl;
    cout << "a = " << a << endl;
}

int main()
{
    // Unlike global variable it isnt acccessible other
    // functions excl the func in which it is declared
    // st = 12;
    fun();
    fun();
    fun();
    return 0;
}