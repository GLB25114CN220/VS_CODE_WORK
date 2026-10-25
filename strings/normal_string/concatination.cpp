#include <iostream>
using namespace std;
int main()
{
    // string a = "11";
    // string b = "11";
    // cout<<a+b<<endl;

    string s = "abc";
    string c = s + "3";         /// it will not give the error (string + string)
    // string c = s + 3;        /// it will give the error (string + integer)
    cout << c << endl;

    string n = "raghav";
    n += " garg";
    cout << n << endl;
    return 0;
}