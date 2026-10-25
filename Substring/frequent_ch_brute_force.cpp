#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int n = s.length();
    int max_count = 0;
    char ch;
    int value = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        
        if(value == s[i])
        {
            continue;
        }
        value = s[i];

        if (count > max_count || ((count == max_count) && (value < ch)))
        {
            max_count = count;
            ch = s[i];
        }
    }

    cout << "max repetition --> " << max_count << endl;
    cout << "character with max count --> " << ch << endl;
    return 0;
}