#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "yashbhar";
    s.push_back('B');
    s.pop_back();
    cout << s << endl;

    // sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}