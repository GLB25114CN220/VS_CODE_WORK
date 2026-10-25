#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << endl;
    cout << "The number from 1 to 500 which are not divisible by 3 are :--";
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 != 0)
        {
            cout << i << " ";
        }
        else
        {
            continue;
        }
    }
    return 0;
}