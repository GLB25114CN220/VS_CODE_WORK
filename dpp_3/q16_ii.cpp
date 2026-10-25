// --> This method will take much more time :--

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Entre the number : ";
    cin >> n;

    cout << endl;
    cout << "The divisors are :--";
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}