#include<bits/stdc++.h>
using namespace std;
int updateValues(int* a,int* b)
{
    int temp = *a;
    if(*a < *b)
    {
        *a += *b;
        *b = *b - temp;
    }
    else
    {
        *a += *b;
        *b = temp - *b;
    }
}
int main()
{
    cout<<"Before swap :--"<<endl;
    int a,b;
    cout<<"a--> ";
    cin>>a;
    cout<<"b--> ";
    cin>>b;

    updateValues(&a , &b);

    cout<<endl;
    cout<<"After swap :--"<<endl;
    cout<<"a--> "<<a<<endl;
    cout<<"b--> "<<b;
    return 0;
}