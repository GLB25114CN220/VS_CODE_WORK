#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n = s.length();

    int half = n / 2;
    for (int i = 0,j = half-1; i < j; i++,j--)
    {
        swap(s[i] , s[j]);
    }
    cout << s << endl;
    return 0;
}