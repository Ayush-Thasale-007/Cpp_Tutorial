#include <iostream>
using namespace std;

// int x = 871234;

class Test
{
private:
    int a;
    int b;

public:
    static int count;
    Test()
    {
        a = 10;
        b = 10;
        count++;
    }

    // Static Functions can only Access static Data members
    static int getCount()
    {

        // Inaccessible
        // a++;
        return count;
    }
};

int Test::count;
// int Test::getCount();

int main()
{
    int x = 536725;
    cout << Test::getCount() << endl;
    Test t1;
    cout << t1.getCount() << endl;
    // cout << ::x;

    return 0;
}