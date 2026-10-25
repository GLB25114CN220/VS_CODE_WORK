#include <bits/stdc++.h>
using namespace std;
double power(double x, int n)
{
    if (n == 0)
        return 1;

    float p = power(x , n / 2);
    if (n < 0)
    {
        return 1.0 / power(x, -1 * n);
    }

    if (n % 2 != 0)
    {
        return x * p * p;
    }
    else
    {
        return p * p;
    }
}
int main()
{
    double x;
    int n;
    cout << "x--> ";
    cin >> x;
    cout << "n--> ";
    cin >> n;

    cout << power(x, n);
    return 0;
}