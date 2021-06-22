#include <iostream>
using namespace std;

class BasicGun
{
public:
    void start() { cout << "Bullets" << endl; }
};

class MachineGun : public BasicGun
{
public:
    void load() { cout << "More Bullets" << endl; }
};

int main()
{
    MachineGun mac;
    BasicGun *gun = new MachineGun();
    gun->start();

    delete gun;

    return 0;
}