#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int num = 1, b = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << num << endl;
            num++;
        }
        else
        {
            int a = -b + 1;
            if (a == 0)
            {
                cout << "n" << endl;
            }
            else
            {
                cout << "n" << a << endl;
            }
            b++;
        }
    }
    return 0;
}