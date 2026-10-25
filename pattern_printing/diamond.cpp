#include <iostream>
using namespace std;
int main()
{
    // -->(METHOD -- 1) :--

    // int n;
    // cout << "n--> ";
    // cin >> n;

    // int st = 2 * n - 1;
    // int nst1 = 1;
    // int nsp1 = n - 1;
    // for (int i = 1; i <= st; i++)
    // {
    //     if (i <= (st / 2 + 1))
    //     {
    //         for (int j = 1; j <= nsp1; j++)
    //         {
    //             cout << "  ";
    //         }
    //         for (int k = 1; k <= nst1; k++)
    //         {
    //             cout << "* ";
    //         }
    //         nsp1--;
    //         nst1 += 2;
    //     }

    //     else
    //     {
    //         if (i == (n + 1))
    //         {
    //             nst1 = nst1 - 4;
    //             nsp1 = nsp1 + 2;
    //         }

    //         for (int l = 1; l <= nsp1; l++)
    //         {
    //             cout << "  ";
    //         }
    //         for (int m = 1; m <= nst1; m++)
    //         {
    //             cout << "* ";
    //         }
    //         nst1 -= 2;
    //         nsp1++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // -->(METHOD -- 2) :--

    {
        int n;
        cout << "Enter n : ";
        cin >> n;

        int st = 2 * n - 1;
        int nst = 1;
        int nsp = n - 1;
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
                    cout << "* ";
                }
                nst += 2;
                nsp--;
            }
            else
            {
                
                for (int j = 1; j <= nsp; j++)
                {
                    cout << "  ";
                }
                for (int k = 1; k <= nst; k++)
                {
                    cout << "* ";
                }
                nst -= 2;
                nsp++;
            }
            cout << endl;
        }
    }
    return 0;
}