// tc ---> O(n)

#include <iostream>
#include <climits>
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

    int max_1 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (max_1 < arr[i])
        {
            max_1 = arr[i];
        }
    }

    // max_1 = 4
    // arr size = 4
    // input = 1 2 3 4

    int max_2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max_2 < arr[i])
        {
            if (arr[i] != max_1)
            {
                max_2 = arr[i];
            }
        }
    }

    cout << "The sec max element in an array is : " << max_2;
    return 0;
}