#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "yash";
        break;
    case 2:
        cout << "aditi";
        break;
    default:
        cout << "nitin";
        break;
    }
    return 0;
}