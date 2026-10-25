#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    cout<<"a--> ";
    cin>>a;
    cout<<"b--> ";
    cin>>b;
    cout<<"c--> ";
    cin>>c;

    cout<<"sum--> "<<sum(a,b,c);
    return 0;
}