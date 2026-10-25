#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int half = s.length() / 2;
    cout << s.substr(0, half) << endl;
    cout << s.substr(half, half) << endl;
    return 0;
}