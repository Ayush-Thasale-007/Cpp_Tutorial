#include <iostream>
using namespace std;

class MyException : public exception
{
};

int division(int x, int y) throw(MyException)
{
    if (y == 0)
    {
        throw MyException();
    }
    return x / y;
}

int main()
{
    int a = 7, b = 0;
    try
    {
        division(a, b);
    }

    catch (MyException e)
    {
        cerr << "Division by Zero" << endl;
    }

    return 0;
}