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

    float perimeter()
    {
        return 2 * (length + breadth);
    }

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

    // Enquiry
    bool isSquare()
    {
        if (length == breadth)
            return true;
        else
            return false;
    }
};

int main()
{
    Rectangle rect;

    return 0;
}
