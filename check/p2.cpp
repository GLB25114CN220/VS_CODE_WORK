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

    int min = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] == min)  continue;
        if(min>arr[i])
        {
            min = arr[i];
        }
    }

    cout<<"The minimum element of an array is : "<<min;
    return 0;
}