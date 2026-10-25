#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int n = 0;

    int st = num;
    while (st != 0)
    {
        n++; // total number of digits in number
        st /= 10;
    }

    int sum = 0;
    string s = to_string(num);
    for (int i = 0; i < n; i++)
    {
        int digits = 0;
        for (int j = i; j < n; j++)
        {
            digits = (digits * 10) + (s[j] - 48);
            sum += digits;
        }
    }

    cout << sum << endl;
    return 0;
}