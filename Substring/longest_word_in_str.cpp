// mine approach ::::----

// by directly comparing the length of strings:--

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     s.push_back(' ');
//     string em = "";

//     int n = s.size();
//     int i = 0, j = 0;

//     int max_len = 0;
//     while (j < n)
//     {
//         if (s[j] != ' ')
//         {
//             j++;
//         }

//         if (s[i] == ' ')
//         {
//             i++;
//             j++;
//         }
//         else if (s[j] == ' ')
//         {
//             int len = j - i;
//             if (len > max_len)
//             {
//                 max_len = len;
//                 em = s.substr(i,len);
//             }
//             i = j;
//         }
//     }
//     cout << max_len << " ";
//     cout << em << endl;

//     return 0;
// }





// or





// by pushing the substrings into the vector and then compare the length of each strings:--

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     s.push_back(' ');
//     vector<string> str;

//     int n = s.length();

//     int i = 0, j = 0;
//     while (j < n)
//     {
//         if (s[j] != ' ')
//         {
//             j++;
//         }

//         if (s[i] == ' ')
//         {
//             i++;
//             j++;
//         }
//         else if (s[j] == ' ')
//         {
//             int len = j - i;
//             i = j;
//             str.push_back(s.substr(i, len));
//         }
//     }

//     int max_len = str[0].size();
//     for (int i = 1; i < str.size(); i++)
//     {
//         int len = str[i].size();
//         if (len > max_len)
//         {
//             max_len = len;
//         }
//     }
//     cout << max_len << endl;
//     return 0;
// }





// sir's approach :::----





#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string ans = "";
    int n = s.length();

    int i = 0, j = 0, max_len = 0;


    while (j < n)
    {
        if (s[j] != ' ')
        {
            j++;
        }
        else
        {
            int len = j - i;
            if (len > max_len)
            {
                max_len = len;
                ans = s.substr(i , len);
            }
            i = j;
            while (i < n && s[i] == ' ')
            {
                i++;
                j++;
            }
        }
    }
    int len = j - i;
    if (len > max_len)
    {
        max_len = len;
        ans = s.substr(i , len);
    }
    cout << max_len<<" ";
    cout << ans << endl;
    return 0;
}