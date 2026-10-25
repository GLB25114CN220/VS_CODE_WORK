#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int n1 = 2;
    int n2 = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << min(i, j) << " ";
        }
        for (int k = n - 1; k >= 1; k--)
        {
            cout << min(i, k) << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << min(i, j) << " ";
        }
        for (int k = n - 1; k >= 1; k--)
        {
            cout << min(i, k) << " ";
        }
        cout << endl;
    }
    return 0;
}