#include <iostream>
using namespace std;

class Rectangle
{

private:
    float length = 10;
    float breadth = 20;

public:
    Rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &rec)
    {
        length = rec.length;
        breadth = rec.breadth;
    }

    float area()
    {
        return length * breadth;
    }

    // Declaration only
    float perimeter();

    void setLength(float l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }

    void setBreadth(float b)
    {

        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }

    float getBreadth()
    {
        return breadth;
    }

    float getLength()
    {
        return length;
    }

    bool isSquare()
    {
        if (length == breadth)
            return true;
        else
            return false;
    }
};

// Definition
// :: -> Scope Resolution Operator
// Namespace Specfier

/*
    Here in machine code area function is copied in the main
    Whereas the perimeter Function has seperate place and 
    when it is called it is retrieved
*/

// Whenever there is loops and all in function it is better to
// write it this way rather that inline function (area())
float Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    Rectangle rect;

    return 0;
}
