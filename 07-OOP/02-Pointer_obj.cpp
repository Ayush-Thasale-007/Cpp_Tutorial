#include <iostream>
using namespace std;

class Rectangle
{
public:
    float length = 10;
    float breadth = 20;

    float area()
    {
        return length * breadth;
    }

    float perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle x;
    Rectangle *p;
    p = &x;
    // p gaps length
    // for pointer use ->
    p->length = 20;
    cout << p->length << endl;
    cout << x.length << endl;

    // Creating object in heap
    Rectangle *q = new Rectangle;
    q->length = 30;
    cout << q->length << endl;
    return 0;
}