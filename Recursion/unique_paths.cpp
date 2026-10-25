#include <bits/stdc++.h>
using namespace std;
void u_p(int r, int c, string s)
{
    if(r==1 && c==1)
    {
        cout<<s<<endl;
        return;
    }
    if(r==0 || c==0)
    {
        return;
    }
    u_p(r-1,c,s+"D");
    u_p(r,c-1,s+"R");
}
int main()
{
    int r, c;
    cin >> r >> c;
    string s = "";

    u_p(r, c, s);
    return 0;
}