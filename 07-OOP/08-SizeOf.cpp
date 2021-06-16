#include <iostream>
using namespace std;

class Data
{
public:
    int sizeIs(string str)
    {
        int len = str.length();
        int i, j;
        if (len == 1)
        {
            if (str[0] >= 48 && str[0] <= 57)
            {
                return sizeof(int);
            }
            else
                return sizeof(char);
        }
        else
        {
            int flag = 0;
            int count = 0;
            for (i = 0; i < len; i++)
            {
                if (str[i] == '.')
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                return sizeof(int);
            }
            else
            {
                for (j = i + 1; j < len; j++)
                {
                    count++;
                }
                if (count > 5)
                {
                    return sizeof(double);
                }
                else
                {
                    return sizeof(float);
                }
            }
        }
        return sizeof(str);
    }
};

int main()
{
    string str;
    cout << "Enter : ";
    cin >> str;
    Data ob;
    cout << ob.sizeIs(str);
    return 0;
}