#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    // cout<<cbrt(1000)<<endl;
    // cout<<sqrt(100)<<endl;
    // cout<<max(12,23)<<endl;
    // cout<<min(34,5)<<endl;
    // cout<<pow(2,3)<<endl;
    // cout<<abs(-2)<<endl;

    int a,b,c;
    cout<<"a--> ";
    cin>>a;
    cout<<"b--> ";
    cin>>b;
    cout<<"c--> ";
    cin>>c;

    // int num = max(a,b);
    // if(num == a){
    //     cout<<max(num,c);
    // }
    // else
    // {
    //     cout<<max(num,c);
    // }
    // return 0;


    // alternative method :--

    cout<<max(a,max(b,c))<<endl;
    return 0;
}