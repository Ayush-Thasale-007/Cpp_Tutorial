#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    // Constructors -> to have some default values

    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // Giving parameters as well

    Rectangle(int l, int b)
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

    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }

    void setBreadth(int b)
    {
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
    Rectangle rect(10, 15);
    Rectangle defrect();

    cout << rect.area() << endl;
    // isnt working
    // cout << defrect().area() << endl;
    // cout << rect(15, 10).area() << endl;
    Rectangle rect3(rect);
    cout << rect3.area() << endl;
    return 0;
}
