#include<iostream>
using namespace std;
int min(int n1,int n2)
{
    if(n1<n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
int main()
{
    int a,b;
    cout<<"a--> ";
    cin>>a;
    cout<<"b--> ";
    cin>>b;

    cout<<"MIN--> "<<min(a,b);
    return 0;
}