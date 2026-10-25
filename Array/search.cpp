#include<iostream>
using namespace std;
int main()
{
    int n,integer;
    cout<<"n--> ";
    cin>>n;
    cout<<"Integer --> ";
    cin>>integer;
    
    cout<<endl;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\n\nNow checking the presence of an element in an array :--\n\n";

    
    int st = 323;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == integer)
        {
            st = 1;
        }
        else
        {
            st = 0;
        }
    }

    if(st == 0)
    {
        cout<<"Element not found";
    }
    else if(st == 1)
    {
        cout<<"Element found";
    }
    return 0;
}