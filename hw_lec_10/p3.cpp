#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int st1 = 96, st2 = 64;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 != 0)
            {
                char ch1 = (char)(st1 + i);
                cout << ch1 << " ";
            }
            else
            {
                char ch2 = (char)(st2 + i);
                cout << ch2 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}