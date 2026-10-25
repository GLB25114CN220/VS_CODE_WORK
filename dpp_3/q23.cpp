#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << endl;
    cout << "All numbers whose sum of digits equals to 17 are :--";
    cout << endl;
 
    int st;
    for (int i = 1; i <= n; i++)
    {
        st = i;
        int sum = 0, ld;
        while (st != 0)
        {
            ld = st % 10;
            sum = sum + ld;
            st = st / 10;
        }
        if (sum == 17)
        {
            cout << i << " ";
        }
    }
    return 0;
}