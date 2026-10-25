#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "a--> ";
    cin >> a;
    cout << "b--> ";
    cin >> b;

    int num = 1;
    if(a==0)
    {
        num = 0;
    }
    for (int i = 1; i <= b; i++)
    {
        if (a == 1)
        {
            break;
        }
        else if(a==0)
        {
            break;
        }

        num = num * a;
    }

    if (a == 0 && b == 0)
    {
        cout << "Indeterminate Form";
    }
    else
    {
        cout << a << " raise to the power " << b << " is " << num;
    }
    return 0;
}