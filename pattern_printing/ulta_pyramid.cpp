#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int nsp = 0;
    int nst = (4 * 2) - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        nsp++;
        nst -= 2;
        cout << endl;
    }
    return 0;
}