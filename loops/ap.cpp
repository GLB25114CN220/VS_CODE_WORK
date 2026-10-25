#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int a = 2;
    int d = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a += d;
    }
    return 0;
}