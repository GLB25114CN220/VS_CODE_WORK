#include <iostream>
#include <vector>
using namespace std;
vector<int> twosum(vector<int> &arr, int target)
{
    int n = arr.size();
    vector<int> v1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                v1.push_back(i+);
                v1.push_back(j);
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << v1[i] << " ";
    }
}

int main()
{
    int n, t;
    cout << "n--> ";
    cin >> n;
    cout << "target--> ";
    cin >> t;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    twosum(arr, t);
    return 0;
}