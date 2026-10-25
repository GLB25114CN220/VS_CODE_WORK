#include <bits/stdc++.h>
using namespace std;
string greater_number(string s1, string s2)
{
    int i = 0;
    while(s1[i] == '0') i++;
    int j = 0;
    while(s2[i] == '0') j++;
    int length_str_1 = s1.size() - i;
    int length_str_2 = s2.size() - j;

    if(length_str_1 > length_str_2) return s1;
    if(length_str_1 < length_str_2) return s2;

    // if the length of both strings are same then compare the character's aascii value of each string :--


    while(s1[i] == s2[j] && i < s1.length()){ // overflow condition
        i++;
        j++;
    }

    if(i == s1.length()) return s1;  // for 0084 , 084
    if(s1[i] > s2[j]) return s1;
    else return s2;  
}
int main()
{
    vector<string> s = {"0089", "167", "970", "45", "4456", "003456"};
    string max = s[0];

    for (int i = 1; i < s.size(); i++)
    {
        max = greater_number(s[i], max);
    }
    cout << max << endl;
    return 0;
}