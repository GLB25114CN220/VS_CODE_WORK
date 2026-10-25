#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (ch >= 65 and ch <= 90)
        {
            s[i] += 32;
        }
    }

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (ch !=(ch >= 97 and ch <= 122))
        {
            s[i] = '1';
        }
    }
    cout << s << endl;
    return 0;    
}