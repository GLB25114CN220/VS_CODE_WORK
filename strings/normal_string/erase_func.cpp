#include <iostream>
using namespace std;
int main()
{
    // char ch;
    // cout << "Enter the character : ";
    // cin >> ch;

    // string s = "yashbhardwaj";
    // if (ch == s[3])
    // {
    //     s.erase(s.begin() + 3);
    // }
    // cout << s << endl;   // it means string poore khud he shift hojayegi automatically
    // return 0;

    
    // string s1 = "yash";
    // string s2 = "Yash";
    // if(s1 == s2)
    // {
    //     cout<<"equal str";
    // }
    // else
    // {
    //     cout<<"unequal str";
    // }
    // return 0;

    char ch;
    cout<<"Enter the character : ";
    cin>>ch;

    string s = "yashbhardwaj";
    if(ch == s[4]){
        s.erase(s.begin() + 4);
    }
    cout<<s<<endl;
    return 0;
}