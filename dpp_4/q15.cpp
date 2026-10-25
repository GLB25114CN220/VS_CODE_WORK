#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int v1 = 1;
    int nsp = 0;
    int store;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int num1 = 65;
        if (i < n)
        {
            for (int j = 1; j <= v1; j++)
            {
                if (j == v1)
                {
                    char ch1 = (char)num1;
                    cout << ch1 << " ";
                }
                else
                {
                    cout << "  ";
                }
                num1++;
            }
            store = num1;
            for (int k = 1; k <= (2 * n) - (2 * i); k++)
            {
                cout << "  ";
            }
            for (int l = 1; l <= v1; l++)
            {
                int num2 = 64 + i;
                if (l == 1)
                {
                    char ch2 = (char)num2;
                    cout << ch2 << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            v1++;
        }

        else
        {
            for (int j = 1; j <= v1; j++)
            {
                int num4 = store + n - i;
                if (j == v1)
                {
                    char ch3 = (char)num4;
                    cout << ch3 << " ";
                }
                else
                {
                    cout << "  ";
                }
                num1--;
            }
            for (int k = 1; k <= nsp; k++)
            {
                cout << "  ";
            }
            for (int l = 1; l <= v1; l++)
            {
                int num3 = store + n - i;
                if (l == 1)
                {
                    char ch4 = (char)num3;
                    cout << ch4 << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            v1--;
            nsp += 2;
        }
        cout << endl;
    }
    return 0;
}