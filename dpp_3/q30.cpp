#include <iostream>
using namespace std;
int main()
{
    float a;
    int b;
    cout << "a--> ";
    cin >> a;
    cout << "b--> ";
    cin >> b;

    float st = 1;
    if (b >= 0)
    {
        for (int i = 1; i <= b; i++)
        {
            st = st * a;
        }
        cout << a << " to the power " << b << " is " << st;
    }
    else
    {
        b = b * (-1);
        for (int i = 1; i <= b; i++)
        {
            st = st * a;
        }
        float store = 1.0 / st;
        cout << a << " to the power " << b << " is " << store;
    }
    return 0;
}