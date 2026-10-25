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
        for (int j = 1; j <= n; j++)
        {
            char ch = (char)(st + i);
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}