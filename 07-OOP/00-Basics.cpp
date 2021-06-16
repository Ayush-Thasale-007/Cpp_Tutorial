#include <iostream>
using namespace std;

/*
    Asbtraction -> Abstract idea of something  going on internal

    Encapsulation -> Wrapping of data in single unit
        Data Hiding -> its not for security but is present for avoiding mishandling
        Data = Private,  Functions = Public

    Inheritance -> Suppose a class car and class BMW, Toyota and Suzuki so this latter classes inherits from car class

    Polymorphism -> If u want to learn driving u will learn car and then u can drive BMW Same with Browser 

*/

/*
            Class vs Objects
    Human is class and u reading this and me are objects
*/

int main()
{
    // Creating class
    class Rectangle
    {
        float length = 10;
        float breadth = 20;
        float area()
        {
            return length * breadth;
        }

        float perimeter()
        {
            return 2 * (length + breadth);
        }
    };

    // Rectangle is class and
    // r1, r2 and r3 are objects
    Rectangle r1, r2, r3;

 

    return 0;
}