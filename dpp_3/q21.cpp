#include <iostream>
using namespace std;
int main()
{
    int k;
    cout << "Enter the number : ";
    cin >> k;

    cout << "Possible Outcomes are :--" << endl;

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << i << "," << j << endl;
        }
    }
    return 0;
}