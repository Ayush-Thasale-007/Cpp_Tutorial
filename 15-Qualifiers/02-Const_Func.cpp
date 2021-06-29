#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 10;
    int y = 10;
    // For not modifying data members accidently in a function
    void Display() const
    {
        // x++;
        cout << x << y << endl;
    }
};

int main()
{

    return 0;
}