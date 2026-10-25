#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int num = 0;
    int v1 = n;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= v1; j++)
            {
                cout << "*";
            }
            for (int j = 1; j <= num; j++)
            {
                cout << " ";
            }
            for (int l = 1; l <= v1; l++)
            {
                cout << "*";
            }
            num += 2;
            v1--;
        }

        else
        {
            num -= 2;
            v1++;
            for (int j = 1; j <= v1; j++)
            {
                cout << "*";
            }
            for (int k = 1; k <= num; k++)
            {
                cout << " ";
            }
            for (int l = 1; l <= v1; l++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}