#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int nsp1 = n - 1;
    int nst1 = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i < n)
        {
            for (int j = 1; j <= nsp1; j++)
            {
                cout << "  ";
            }
            for (int k = 1; k <= nst1; k++)
            {
                if (k == 1 || k == nst1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            nsp1--;
            nst1 += 2;
        }
        else
        {
            for (int j = 1; j <= nsp1; j++)
            {
                cout << "  ";
            }
            for (int k = 1; k <= nst1; k++)
            {
                if (k == 1 || k == nst1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            nst1 -= 2;
            nsp1++;
        }
        cout << endl;
    }
    return 0;
}