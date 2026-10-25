#include <iostream>
#include <vector>
using namespace std;
void found(vector<int>& arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout<<(i)<<" ";
                cout<<(j);
            }
        }
    }
}
int main()
{
    vector<int> v = {1,2,3,5};
    int k = 7;
    found(v , k);
}