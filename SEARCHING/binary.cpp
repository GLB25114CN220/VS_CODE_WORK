#include <iostream>
using namespace std;
int main()
{
    int n, target;
    cout << "n--> ";
    cin >> n;
    cout << "Target--> ";
    cin >> target;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int st = 0, end = n - 1, mid = ((st + end) / 2);

    while (mid != st && mid != end && arr[mid] != target)
    {
        if (arr[mid] < target)
        {
            st = mid;
        }
        else if (arr[mid] > target)
        {
            end = mid;
        }
        mid = ((st + end) / 2);
    }

    if (arr[mid] == target)
    {
        cout << "Target found";
    }
    else
    {
        cout << "Target not found";
    }

    return 0;
}