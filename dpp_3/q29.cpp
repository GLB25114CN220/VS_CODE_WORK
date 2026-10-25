#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int st;
    cout << endl;
    cout << "The prime factors of a given number are :--";
    cout << endl;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
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
    }
    return 0;
}