#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {10,20,30,40,50,60,70};
    int temp;

    for(int i=0,j=arr.size()-1;i<j;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Now printing the exact reversed array :--

    cout<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}