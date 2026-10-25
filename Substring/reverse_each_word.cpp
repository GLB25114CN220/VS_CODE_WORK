#include <bits/stdc++.h>
using namespace std;
void str_reverse(int i, int ln, string &s)
{
    for (int k = i, p = ln - 1; k < (i + ln) / 2; k++, p--)
    {
        swap(s[k], s[p]);
    }
}

int main()
{
    string s;
    getline(cin, s);

    int n = s.size();
    int i = 0, j = 0;
    while (j < n)
    {
        if (s[j] != ' ')
        {
            j++;
        }
        else
        {
            str_reverse(i, j, s);
            i = j;


            if (s[i] == ' ' && i < n)
            {
                i++;
                j++;
            }
        }
    }
    
    str_reverse(i, j, s);
    i = j;


    cout << s << endl;
    return 0;
}