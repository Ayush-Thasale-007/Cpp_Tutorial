#include <iostream>
using namespace std;

// Distributing Roll numbers 
// Based on Admisiion Number

class Student
{
public:
    int rollNo;
    static int admNo;
    Student()
    {
        admNo++;
        rollNo = admNo;
    }
};

int Student::admNo;

int main()
{
    Student one;
    Student two;
    Student three;

    cout << one.rollNo << endl;
    cout << two.rollNo << endl;
    cout << three.rollNo << endl;

    return 0;
}