#include <iostream>
using namespace std;

class MyException : exception
{
};

class MyException2 : public MyException
{
};

int main()
{
    try
    {
        throw 5.2f;
    }
    catch (int e)
    {
        cerr << "Int Catch";
    }
    catch (float e)
    {
        cerr << "Float Catch";
    }
    catch (char e)
    {
        cerr << "Char Crash";
    }
    // This order aint right as MyException as it is Parent class and will handle both
    // catch (MyException)
    // {
    //     cerr << "Parent Class";
    // }
    // catch (MyException2)
    // {
    //     cerr << "Child Class";
    // }
    catch (MyException2)
    {
        cerr << "Parent Class";
    }
    catch (MyException)
    {
        cerr << "Child Class";
    }
    // Universal Catch
    catch (...)
    {
        cerr << "All Catch";
    }
    return 0;
}