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

    // BEST CODE :----( find smallest element first)

    // for (int i = 0; i < n - 1; i++)
    // {
    //     int min = arr[i], m_in = i;
    //     for (int j = i; j < n; j++)
    //     {
    //         if (min > arr[j])
    //         {
    //             min = arr[j];
    //             m_in = j;
    //         }
    //     }
    //     swap(arr[i], arr[m_in]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }


    // BEST CODE:--(find largest element first)

    for (int i = n - 1; i >= 0; i--)
    {
        int max = arr[i], max_in = i;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
                max_in = j;
            }
        }
        swap(arr[i], arr[max_in]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // BEKAAR CODE :--

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}