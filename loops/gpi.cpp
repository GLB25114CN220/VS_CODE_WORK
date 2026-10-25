#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int a = 1;
    int r = 2;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a *= r;
    }
    return 0;
}