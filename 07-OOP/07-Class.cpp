#include <iostream>
using namespace std;

class Rectangle
{
    // Data
private:
    int length;
    int breadth;

    // Functions
public:
    // Constructors
    Rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBreadth(b);
    } // Paramaterised + Default Constructor

    Rectangle(Rectangle &rec)
    {
        length = rec.length;
        breadth = rec.breadth;
    } // Copy Constructor

    // Accessors
    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    // Mutators
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

    // Facilitators
    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }

    // Enquiry
    bool isSquare()
    {
        if (length == breadth)
            return true;
        else
            return false;
    }

    // Destructors
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
    // r1.~Rectangle();
    r1.setBreadth(3);
    inFunc();
    return 0;
}