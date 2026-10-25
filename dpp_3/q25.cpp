#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int ld;

    for (int i = 1; i <= n; i++)
    {
        int st = i,sum = 0;
        while (st != 0)
        {
            ld = st % 10;
            sum = sum + ld;
            st = st / 10;
        }
        if (sum == 23)
        {
            break;
        }
        else
        {
            cout << i << " ";
        }
    }
    return 0;
}