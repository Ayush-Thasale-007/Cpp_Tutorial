#include <iostream>
using namespace std;

// Demonstrating Short Circuit
// A Short Note On Short Circuit
/*
    In C++ short-circuiting occurs while evaluating ‘&&’ (AND) and ‘||'(OR) 
    logical operators. While evaluating ‘&&’ operator if the left-hand side of ‘&&’ 
    gives false, then the expression will always yield false irrespective of the 
    value of the right-hand side of ‘&&’, so checking right-hand side of ‘&&’ 
    makes no sense. So, in this situation evaluation of the right-hand side is 
    avoided by the compiler. Similarly, in the case of logical OR ‘||’ operation when 
    the left-hand side gives ‘true’, the result of the expression 
    will always be true irrespective of the value of the right-hand side.
*/

int main()
{
    cout << "-------|| Operator Short Circuit-------" << endl;
    // Lets Demonstrate For || Operator
    if (true || cout << "Hello")
    {
        cout << "See Hello Never Executed" << endl;
    }
    // The Reason : As True OR Anything == True
    // It Never Checks The Prior Condition

    if (cout << "Hello " || true)
    {
        cout << "See Hello Executed Here" << endl;
    }

    cout << "-------&& Operator Short Circuit-------" << endl;
    // Lets Demonstrate For && Operator
    if (false && cout << "Hello ")
    {
        // Hello Wont Be Printed 
    }
    // The Reason : As False And Anything == False
    // It Never Checks The Prior Condition

    if (cout << "Hello " && false)
    {
        // Hello Will Be Printed
    }

    return 0;
}