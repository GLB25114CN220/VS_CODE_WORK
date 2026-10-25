#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &arr, int t)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = ((low + high) / 2);
        if (arr[mid] < t)
        {
            high = mid - 1;
        }
        else if (arr[mid] > t)
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int n, t;
    cout << "n--> ";
    cin >> n;
    cout << "t--> ";
    cin >> t;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << search(arr, t);
    return 0;
}