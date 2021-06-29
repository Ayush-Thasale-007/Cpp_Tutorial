#include <iostream>
using namespace std;

// Destructor -> Used after destructing a class

class Test
{
public:
    Test()
    {
        cout << "Created" << endl;
    }
    ~Test()
    {
        cout << "Destroyed" << endl;
    }
};

int main()
{
    Test *ptr = new Test();
    // Will call Destructor when deleted
    delete ptr;
    return 0;
}