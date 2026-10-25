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

    int mn_el = INT_MAX; 

    for(int i=0;i<n;i++)
    {
        if(mn_el > arr[i])
        {
            mn_el = arr[i];
        }
    }

    cout<<"The min element in an array is : "<<mn_el;
    return 0;
}