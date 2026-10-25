#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cout << "n--> ";
    // cin >> n;

    int a = 99;
    int d = 4;
    for (int i = 1; i <= 25; i++)
    {
        cout << a << " ";
        a -= d;
    }
    return 0;
}