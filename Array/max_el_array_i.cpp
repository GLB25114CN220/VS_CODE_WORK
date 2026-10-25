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
        cin>>arr[i];
    }

    cout<<("\nNow calculating the max element in an array :--\n\n");

    int max = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout<<"Max element in the given array is : "<< max <<endl;
    return 0;
}