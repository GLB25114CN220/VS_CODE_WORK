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

    // cout << "Counting the total number of 0 : ";
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }

    int pass = 1;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < n - pass; j++)
        {
            if (arr[j] == 0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        pass++;
    }

    cout << "\nRequired Array :-- \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}