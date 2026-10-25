#include <bits/stdc++.h>
using namespace std;
void rec_str(string &s, int index)
{
    if (index == s.size())
        return;
    cout << s[index] << " ";
    rec_str(s, index + 1);
}
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);

    rec_str(s, 0);
    return 0;
}