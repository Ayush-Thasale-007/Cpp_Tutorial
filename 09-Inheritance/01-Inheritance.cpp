#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b);
    int getLength();
    int getBreadth();
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
};

// Constructors
Rectangle::Rectangle(int l = 0, int b = 0)
{
    setLength(l);
    setBreadth(b);
}

// Accessors
int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle::getLength()
{
    return length;
}

// Mutators
void Rectangle::setLength(int l)
{
    length = l;
}

void Rectangle::setBreadth(int l)
{
    breadth = l;
}

// Facilitators
int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

// Child Class
// Class Cuboid inherited publically from class Rectangle
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int l, int b, int h);
    int volume();
    int getHeight();
    void setHeight(int h);
};

// Constructor
Cuboid::Cuboid(int l = 0, int b = 0, int h = 0) : Rectangle(l, b)
{
    height = h;
    setLength(l);
    setBreadth(b);
}

// Accessors
int Cuboid::getHeight()
{
    return height;
}

// Mutators
void Cuboid::setHeight(int h)
{
    height = h;
}

// Facilitators
int Cuboid::volume()
{
    return getLength() * getBreadth() * height;
}

int main()
{
    Cuboid c1;
    c1.setLength(7);
    c1.setBreadth(34);
    c1.setHeight(88);

    cout << c1.volume() << endl;

    return 0;
}

// In inheritance first Default constructor of Base Class
// Then of Derived Class is Executed