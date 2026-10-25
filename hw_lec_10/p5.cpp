#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int st = 64;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout << j;
            }
            else
            {
                char ch = (char)(st + j);
                cout << ch;
            }
        }
        cout << endl;
    }
    return 0;
}