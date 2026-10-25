#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<bool> flag(n);

    for (int elem : arr)
    {
        flag[elem] = 1;
    }


    int found;
    for (int i = 0; i < n; i++)
    {
        if(flag[i] == 0)
        {
            found = i;
        }
    }

    cout << "Missing Element in an array is : " << found;
}