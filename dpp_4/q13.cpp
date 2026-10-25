#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (int k = 1; k <= n - 1; k++)
            {
                cout << " " << i;
            }
        }
        cout << endl;
    }
    return 0;
}