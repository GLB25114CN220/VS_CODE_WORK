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

    if ((n1 <= n2) && (n1 <= n3))
    {
        cout << n1 << " is the smallest number.";
    }
    else if ((n2 <= n3) && (n2 <= n1))
    {
        cout << n2 << " is the smallest number.";
    }
    else if ((n3 <= n1) && (n3 <= n2))
    {
        cout << n3 << " is the smallest number.";
    }
    else
    {
        cout << "none";
    }
    return 0;
}