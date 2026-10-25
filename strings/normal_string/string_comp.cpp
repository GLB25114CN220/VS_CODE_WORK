#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string x = "apple";
    // string y = "aqt";      // comparision of first letter to next letter of the string is done according to the their respective ascii values

    // if(x > y){
    //     cout<<x<<" is greater than "<<y<<endl;
    // }
    // else{
    //     cout<<y<<" is greater than "<<x<<endl;
    // }

    string s;
    getline(cin , s);
    if(s.empty())
    {
        cout<<"empty";
    }
    else{
        cout<<"not empty";
    }

    for (char ch : s)
    {
        cout<<ch<<" ";
    }
    return 0;
}