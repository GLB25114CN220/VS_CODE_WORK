#include <iostream>
using namespace std;
isprime(int n)
{
    int a = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a = 1;
        }
    }
    if (n == 1)
    {
        return 0;
    }
    else if (a == 0)
    {
        return n;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int st;
    for (int i = 1; i <= n; i++)
    {
        st = isprime(i);
        if (st != 0)
        {
            cout << st<<" ";
        }
    }
    return 0;
}