#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int nst = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        nst--;
        cout << endl;
    }
    return 0;
}