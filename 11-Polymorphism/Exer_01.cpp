#include <iostream>
using namespace std;
#define PI 3.142

class Shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    Rectangle(float l, float b);
    float area() { return length * breadth; }
    float perimeter() { return 2 * (length + breadth); }
};

Rectangle::Rectangle(float l = 1, float b = 1)
{
    length = l;
    breadth = b;
}

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r);
    float area() { return PI * (radius * radius); }
    float perimeter() { return PI * 2 * radius; }
};

Circle::Circle(float r = 1)
{
    radius = r;
}

int main()
{
    Circle circ(3);
    Rectangle rect(7);

    cout << circ.area() << endl;
    cout << circ.perimeter() << endl;
    cout << rect.area() << endl;
    cout << rect.perimeter() << endl;

    return 0;
}