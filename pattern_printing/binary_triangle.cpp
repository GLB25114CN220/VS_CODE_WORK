#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int a = 1, b = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << a << " ";
            }
            else
            {
                cout << b << " ";
            }
        }
        cout << endl;
    }
    return 0;
}