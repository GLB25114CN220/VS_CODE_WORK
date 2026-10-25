// #include <iostream>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     int n = s.size();
//     int i = 0, j = n;

//     while (i != j)
//     {
//         char ch = s[i];
//         if (ch >= 65 and ch <= 90)
//         {
//             s[i] += 32;
//         }
//         else if (ch >= 97 and ch <= 122)
//         {
//             s[i] -= 32;
//         }
//         i++;
//     }
//     cout << "output --> " << s << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter string : ";
    getline(cin, s);

    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (ch>=65 and ch<=90){
            s[i] += 32;
        }
        else if(ch>=97 and ch<=122){
            s[i] -= 32;
        }
        else{
            i++;   
        }
    }
    cout<<s<<endl;
    return 0;
}