#include <iostream>
using namespace std;

// Checking Default behaviour
// of Inherited Class

class Parent
{
private:
    int pvt;

protected:
    int pro;

public:
    int pub;
};

class Child : Parent
{
    void funChild()
    {
        pub = 33;
        pro = 44;
    }
};

class grandChild : Child
{
    void funChild()
    {
        // pub = 33;
        // pro = 44;

        // as both pub and pro are inaccessile
        // conclusion is the default behaviour is
        // private
    }
};

int main()
{

    return 0;
}