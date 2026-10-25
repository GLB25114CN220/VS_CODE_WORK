#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int nsp = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < nsp; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << nCr(i, k)<<" ";
        }
        nsp--;
        cout << endl;
    }
    return 0;
}