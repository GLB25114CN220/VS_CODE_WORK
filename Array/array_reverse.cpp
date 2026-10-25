#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n--> ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0,j=n-1;i<j;i++,j--)
    {
        swap(arr[i] , arr[j]);
    }

    // now printing the reverse array :--

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}