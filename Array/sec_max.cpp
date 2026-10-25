// tc --> O(n)

#include <iostream>
using namespace std;
int main()
{
    int n,max_1,max_2;
    cout << "n--> ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (arr[0] > arr[1])
    {
        max_1 = arr[0];
        max_2 = arr[1];
    }
    else
    {
        max_1 = arr[1];
        max_2 = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max_1)
        {
            max_2 = max_1;
            max_1 = arr[i];
        }
        else if (arr[i] > max_2)
        {
            max_2 = arr[i];
        }
    }

    cout << "Second max element in an array is : " << max_2;
    return 0;
}