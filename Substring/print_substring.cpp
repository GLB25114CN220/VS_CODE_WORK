#include <bits/stdc++.h>
using namespace std;
int main()
{
    // --> Mine

    string s = "abcd";
    // vector<string> st;

    // int l = s.length();
    // for (int j = 0; j < s.size(); j++)
    // {
    //     for (int i = 1; i <= l; i++)
    //     {
    //         st.push_back(s.substr(j, i));
    //     }
    //     l--;
    // }

    // int store = s.length();
    // int start = 0;
    // for (int j = 0; j < s.size(); j++)
    // {
    //     int count = -1;
    //     int iteration = 0;
    //     for (int i = start; i < store; i++)
    //     {
    //         cout << st[i] << " ";
    //         count++;
    //         iteration++;
    //     }
    //     start += iteration;
    //     store += count;
    //     cout << endl;
    // }
    // return 0;





    // Sir's

    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << s.substr(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}