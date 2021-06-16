#include <iostream>
using namespace std;

class Rectangle
{

private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        this->length = length;
        this->breadth = breadth; // Here this->breadth is above class
        // Declared Breadth and length and breadth are local
    }

    Rectangle(Rectangle &rec)
    {
        length = rec.length;
        breadth = rec.breadth;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    void setLength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
            length = 0;
    }

    void setBreadth(int b)
    {
        if (b >= 0)
        {
            breadth = b;
        }
        else
            breadth = 0;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }

    bool isSquare()
    {
        if (length == breadth)
            return true;
        else
            return false;
    }

    ~Rectangle()
    {
        cout << "Rectangle Destroyed" << endl;
    };
};

inline void inFunc()
{
    cout << "This is Inline func" << endl;
}

int main()
{
    Rectangle r1;
    return 0;
}