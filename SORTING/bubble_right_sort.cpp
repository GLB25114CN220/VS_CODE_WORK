#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // This is a decreasing sort in which in every pass the smallest element comes at the right place :--
    int swaps = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swaps = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swaps == 0)
        {
            break;
        }
    }
    if (swaps == 0)
    {
        cout << "Array is already sorted";
    }
    else
    {
        cout << "Sorted array is :--";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}