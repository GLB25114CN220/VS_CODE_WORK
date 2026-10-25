#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int nsp = (2*n) - 2;
    int a = 1;
    for (int i = 1; i <= 2*n; i++)  
    {
        if (i <= n)
        {
            for (int j = 1; j <= a; j++)
            {
                cout << "* ";
            }
            for (int k = 1; k <= nsp; k++)
            {
                cout << "  ";
            }
            for (int l = 1; l <= a; l++)
            {
                cout << "* ";
            }
            a++;
            nsp -= 2;
        }
        else
        {
            a--;
            nsp += 2;
            for (int j = 1; j <= a; j++)
            {
                cout << "* ";
            }
            for (int k = 1; k <= nsp; k++)
            {
                cout << "  ";
            }
            for (int l = 1; l <= a; l++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}