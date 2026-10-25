#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter number 1 : ";
    cin >> n1;
    cout << "Enter number 2 : ";
    cin >> n2;

    cout << endl;
    cout << "The prime numbers that lies between " << n1 << " and " << n2 << " are :--";
    cout << endl;

    for (int i = n1; i <= n2; i++)
    {
        int a = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                a = 0;
                break;
            }
        }
        if (a == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}