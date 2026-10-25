#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter the size of an array : ";
    cin >> n;
    cout << "Enter the index of third smallest elem : ";
    cin >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i], min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
        if (i == k - 1)
        {
            break;
        }
    }

    cout << "The 3rd smallest elem is : " << arr[k - 1];

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}