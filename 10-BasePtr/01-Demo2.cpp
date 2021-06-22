#include <iostream>
using namespace std;

class Rectangle
{
public:
    void Area() { cout << "Dummy Rectangle Area = 70" << endl; }
};

class Cuboid : public Rectangle
{
public:
    void Volume() { cout << "Dummy Cuboid Vol = 700" << endl; }
};

int main()
{
    Cuboid c;
    Rectangle *rect = &c;
    rect->Area();
    // Wrong as u are watching in the frame of
    // Rectangle
    // rect->Volume();
    c.Area();
    c.Volume();

    return 0;
}