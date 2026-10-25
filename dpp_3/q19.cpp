#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int n1 = 0, n2 = 1, sum;

    cout << endl;
    cout << "The Fibonacci series is :--";
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << n1 << " ";
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    return 0;
}