// --> This method is more sufficient as it take much less time complexity :--

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << endl;
    cout << "The divisors of a number are :--" << endl;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (i == (n / i))
        {
            cout << n / i << " ";
        }
        else if (n % i == 0)
        {
            cout << i << " ";
            cout << n / i << " ";
        }
    }
    return 0;
}