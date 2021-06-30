#include <iostream>
// Library that needs to be includes
#include <memory>
using namespace std;

// To avoid Memory leak smart pointers are used
/*
        Smart Pointers
    1. unique_ptr 
    2. shared_ptr
    3. weak_ptr 
*/

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};

int main()
{
    unique_ptr<rectangle> ptr(new rectangle(10, 5));

    cout << ptr->area() << endl;

    return 0;
}