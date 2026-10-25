#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int a = 1;
    int b = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 != 0)
                {
                    cout << a;
                }
                else
                {
                    cout << b;
                }
            }
            else
            {
                if (j % 2 != 0)
                {
                    cout << b;
                }
                else
                {
                    cout << a;
                }
            }
        }
        cout << endl;
    }
    return 0;
}