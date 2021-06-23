#include <iostream>
using namespace std;

// So it basically means that count Belongs to
// Class Test not to its objects
// So its only one copied by both objects

class Test
{
private:
    int a;
    int b;

public:
    // Now Declaring this alone wont work
    static int count;
    Test()
    {
        a = 10;
        b = 10;
        count++;
    }
};

// You have to use Scope resolution as well
// Its just like you are making a Global variable
// Accessible only to class Test
int Test::count;

int main()
{
    // Here Variable a and b will be allocated in both the Objects
    // Whereas Static variable count will be allocated only once
    Test t1;
    Test t2;

    cout << t1.count << endl;
    t1.count++;
    t1.count++;
    cout << t2.count << endl;

    return 0;
}