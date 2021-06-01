#include <iostream>
using namespace std;

// Enum : A User Defined Data Type
// The Data It Stores Is In The Form Of Constant
enum day
{
    mon, // mon is 0
    tue, // tue is 1 and So On
    thu,
    fri,
    sat,
    sun
};

// TypeDef Basically Defines Type To Given Identifier
// Whenever U Will Use marks in Main It Will Be Taken As Unsigned Int
typedef unsigned int marks;

int main()
{
    day today = tue;
    marks m1, m2, m3;
    m1 = 34;
    m2 = 48;
    m3 = 43;
    // today++ : Not Valid

    // It Will Print Position Of Today/Tuesday
    cout << m1 << " " << m2 << " " << m3 << endl;
    cout << today << endl;
    return 0;
}
