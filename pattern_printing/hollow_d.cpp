#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int st = n * 2 - 1;
    int nsp = n - 1;
    int nst = 1;

    for (int i = 1; i <= st; i++)
    {
        if (i < (st / 2 + 1))
        {
            for (int j = 1; j <= nsp; j++)
            {
                cout << "  ";
            }
            for (int k = 1; k <= nst; k++)
            {
                if (k < nst && k > 1)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "* ";
                }
            }
            nst += 2;
            nsp--;
        }
        else
        {
            for (int k = 1; k <= nsp; k++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= nst; j++)
            {
                if (j < nst && j > 1)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "* ";
                }
            }
            nsp++;
            nst -= 2;
        }
        cout << endl;
    }
    return 0;
}