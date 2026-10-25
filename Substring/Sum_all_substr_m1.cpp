#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    string s = to_string(n);
    int l = s.length();
    vector<string> st;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 1; j <= l - i; j++)
        {
            st.push_back(s.substr(i, j));
        }
    }

    int sum = 0;
    for (int i = 0; i < st.size(); i++)
    {
        sum += stoi(st[i]);
    }
    cout << "Total substrings --> " << st.size() << endl;
    cout << "Sum of substrings --> " << sum << endl;
    return 0;
}