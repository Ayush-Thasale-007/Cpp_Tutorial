#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length = 10;
    float breadth = 20;
    // So u can access it globally
    // Private by default
public:
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
    Rectangle r1;
    // r1.length();
    cout << r1.area() << endl;
    return 0;
}