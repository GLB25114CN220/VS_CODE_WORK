#include <bits/stdc++.h>
using namespace std;
void print(vector<string> &s, int index)
{
    if (index == s.size())
        return;
    cout << s[index] << endl;
    print(s, index + 1);
}
int main()
{
    vector<string> s = {"yash", "aditi", "nitin", "geetu"};
    print(s, 0);
    return 0;
}