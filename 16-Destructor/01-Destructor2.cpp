#include <iostream>
using namespace std;

class Test
{
    int *p;
    Test()
    {
        p = new int[7];
        // ifstream fis;
    }
    // To delete p when object is destroyed
    ~Test()
    {
        delete[] p;
    }
};

int main()
{

    return 0;
}