#include <iostream>
using namespace std;

class Fruits
{
public:
    static int price;
    static int getPrice() { return price; }
    void setPrice(int rs) { price += rs; }
};

int Fruits::price;

int main()
{
    Fruits apple;
    Fruits mango;
    apple.setPrice(70);
    mango.setPrice(130);
    cout << mango.getPrice() << endl;
    return 0;
}