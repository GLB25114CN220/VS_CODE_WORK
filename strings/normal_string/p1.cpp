#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if(ch >= 97 and ch <= 122) ch -= 32;
        if(ch == 'A' or ch == 'U' or ch == 'E' or ch == 'I' or ch == 'O') count++;
    }
    cout << "The total vowels are : " << count << endl;
    return 0;
}