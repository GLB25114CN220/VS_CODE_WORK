#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << 3 * i - 1 << " ";
    }
    return 0;
}