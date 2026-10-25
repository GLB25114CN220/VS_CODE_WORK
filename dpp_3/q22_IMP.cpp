// --> VERY VERY IMPORTANT :--

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int ld,st = i;
        while (st != 0)
        {
            ld = st % 10;
            if ((ld == 2 && ld != 7) || (ld == 7 && ld != 2) || (ld == 2 && ld == 7))
            {
                cout << i << " ";
                break;
            }
            st = st / 10;
        }
    }
    return 0;
}