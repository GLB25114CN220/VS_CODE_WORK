#include<bits/stdc++.h>
using namespace std;
void str_get(string s){
    s[0] = 'Q';
}
int main()
{
    string s;
    getline(cin , s);

    str_get(s);
    cout << s << endl;
    return 0;
}