#include <iostream>
using namespace std;
// Namespaces are used to avoid nameconflicts

namespace First
{
    void fun()
    {
        cout << "First" << endl;
    }
}
namespace Second
{
    void fun()
    {
        cout << "Second" << endl;
    }
}
// When not specified Seconf Function will be called
// Should be declared after declaration of namespaces
using namespace Second;
int main()
{
    // To access First function
    First::fun();
    fun();
    return 0;
}