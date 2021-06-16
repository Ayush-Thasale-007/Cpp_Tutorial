#include <iostream>
using namespace std;

/* 
        Property Functions 
    getxxx Functions -> Acessors
    setxxx Functions -> Mutators
    area-type Funcs  -> Facilitators
*/


class Rectangle
{
    // As the data is been made private now we cant acces it
    // so even for Accessing/Changing values we have to
    // declare functions
private:
    float length = 10;
    float breadth = 20;

public:
    float area()
    {
        return length * breadth;
    }

    float perimeter()
    {
        return 2 * (length + breadth);
    }

    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }

    void setBreadth(int b)
    {
        // Making functions intelligent
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }

    int getBreadth()
    {
        return breadth;
    }

    int getLength()
    {
        return length;
    }
};

int main()
{
    Rectangle rect;
    rect.setBreadth(16);
    rect.setLength(25);

    cout << rect.getBreadth() << endl;
    cout << rect.getLength() << endl;
    cout << rect.area() << endl;

    return 0;
}
