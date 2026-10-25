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
        scanf("%d",&arr[i]);
    }

    int min = INT_MAX;
    for(int j = 0;j<n;j++)
    {
        if(arr[j] == min)  continue;
        if(min>arr[j])
        {
            min = arr[j];
        }
    }
    cout<<"The min element is : "<<min;
    return 0;
}