#include <iostream>
using namespace std;

// Types of inheritance
// Single [A] -> [B]
// Hierarchial Inheritance [A] -> [B] and [C]
// Multi Level Inheritance [A] -> [B -> [C]
// Multiple Inheritance [A] and [B] -> [C]
// Multi Part Inheritance [A] -> [B] and [C] -> [D]

// Ways of Inheritance
// Public | Protected | Private
class Parent
{
private:
    int pvt;

protected:
    int pro;

public:
    int pub;
    void fun()
    {
        pvt = 10;
        pro = 20;
        pub = 30;
    }
};

// Publically inheriting class
// Child Classes
class PubChild : public Parent
{
    // Will be able to access pro and pub
    // But it actually Boild down to GrandChild Class
    void funChild()
    {
        // Private Inaccessible
        // pvt = 33;
        pro = 23;
        pub = 33;
    }
};

class ProChild : protected Parent
{
    // See GrandChild Class
    // The Protected will change Public members
    // to Protected
};
class PriChild : private Parent
{
    // See GrandChild Class
    // The Protected will change all members
    // to Private
};

// GrandChild Classes
class PubGran : public PubChild
{
public:
    // Will be able to access protected and public members
    void funGranPub()
    {
        // Private Inaccessible
        // pvt = 33;
        pro = 23;
        pub = 33;
    }
};
class ProGran : public ProChild
{
protected:
    // Will be able to access protected and public members
public:
    void funGranPro()
    {
        pro = 25;
        pub = 55;
    }
};

class PvtGran : public PriChild
{
    void funGranPvt()
    {
        // All inaccessible
        // pro = 25;
        // pub = 55;
    }
};

int main()
{
    PubGran c;
    ProGran c2;
    // See for c Public member is available
    // as it has been inherited Publically
    c.pub;
    // But thats not the case with c2 as it is
    // Inherited Protectedly
    // c2.pub;

    c.funGranPub();
    c2.funGranPro();

    return 0;
}

/*
    Lets analyze you create a Parent class with 3 
    identifiers public (pub), private (pvt) and
    protected (pro)

    you Inherit 3 child classes pub, pvt and pro
    respectively

    then you make Grandchild classes inherited 
    Publically (No an Issue)

    ... Public
    // Public GrandChild Class
    So here in Public Grand Child class You will 
    be able to access Public member as well as
    Protected member   
    // Public GrandChild Object
    it will be able to access Public member

    ... Protected
    // Protected GrandChild Class
    So here in Protected Grand Child class You will 
    be able to access Public member as well as
    Protected member   
    // Protected GrandChild Object
    it will be not able to access Public member
    Because it has been inherited Protectedly
    so it will turn public member to protected'
    member so it will only be accessible in Class
    not in Object

    ... Private
    // Private GrandChild Class
    So here in Private Grand Child class You will 
    not be able to access any member as all have been
    made private by Child Class
    // Public GrandChild Object
    it will not be able to access Anything
*/

// Observe the Default Behaviour if we didnt specify
// Private, Public or Protected