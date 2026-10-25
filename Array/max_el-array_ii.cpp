#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"n--> ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int mx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        // if(mx < arr[i])
        // {
            mx = max(mx,arr[i]);
        // }
    }

    cout<<"Max element in an array is : "<< mx;
    return 0;
}