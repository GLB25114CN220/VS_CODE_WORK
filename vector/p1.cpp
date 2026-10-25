#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr(7 , -1);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(23);
    arr.push_back(45);
    arr.push_back(45);
    arr.pop_back();

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}