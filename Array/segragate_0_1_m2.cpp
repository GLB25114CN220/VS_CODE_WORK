#include <iostream>
using namespace std;
int main()
{
    int n, count_0 = 0, count_1 = 0;
    cout << "n--> ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else
        {
            count_1++;
        }
    }

    for (int i = 0; i < count_0; i++)
    {
        arr[i] = 0;
    }
    for (int j = count_0; j < count_1 + count_0; j++)
    {
        arr[j] = 1;
    }

    //  now printing the sorted array :--

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}