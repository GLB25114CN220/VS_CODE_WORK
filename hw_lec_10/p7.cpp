#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int st = 96;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = (char)(st + j);
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}