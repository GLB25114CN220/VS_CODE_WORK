#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        int num1 = 65;
        for (int k = 1; k <= i; k++)
        {
            char ch1 = (char)num1;
            cout << ch1;
            num1++;
        }

        int num2 = 63 + i;
        for (int l = 2; l <= i; l++)
        {
            char ch2 = (char)num2;
            cout << ch2;
            num2--;
        }
        nsp--;
        cout << endl;
    }
    return 0;
}