#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n--> ";
    cin>>n;

    int sum[n];
    for(int i=0;i<n;i++)
    {
        cin>>sum[i];
    }

    cout<<"\nNow Printing the sum of all elements in an array :--\n";

    int s = 0;
    for(int i=0;i<n;i++)
    {
        s += sum[i];
    }

    cout<<"SUM --> "<< s;
    return 0;
}