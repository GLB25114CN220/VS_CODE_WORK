#include<iostream>
using namespace std;
int main()
{
    // string x = "Yash Bhardwaj";
    // cout<<x<<endl;

    string x;
    // cin>>x;    //here space se cheeze toot ri hain so..
    getline(cin , x); // solution for the above problem..
    cout<<x;
    return 0;
}