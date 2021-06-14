#include <iostream>
using namespace std;

// Global variable accessible everywhere
int g;

void fun()
{
    int a = 5;
    g = 15;
    g += a;
    cout << g << endl;
}

int main()
{
    fun();
    g += 1;
    cout << g << endl;
    return 0;
}