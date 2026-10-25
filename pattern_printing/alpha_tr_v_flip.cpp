#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int a = 65, nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }

        char ch = (char)a;
        for (int k = 1; k <= i; k++)
        {
            cout << ch<<" ";
        }
        nsp--;
        a++;
        cout << endl;
    }
    return 0;
}