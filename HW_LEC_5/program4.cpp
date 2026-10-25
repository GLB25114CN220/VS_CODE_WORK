#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "n1--> ";
    cin >> n1;
    cout << "n2--> ";
    cin >> n2;
    cout << "n3--> ";
    cin >> n3;

    if (n1 < n2)
    {
        if (n1 < n3)
        {
            cout << n1 << " is smallest";
        }
        else
        {
            cout << n3 << " is smallest";
        }
    }
    else
    {
        if (n2 < n3)
        {
            cout << n2 << " is smallest";
        }
        else
        {
            cout << n3 << " is smallest";
        }
    }
    return 0;
}