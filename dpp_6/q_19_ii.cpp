// -->tc =O(n)
// -->much compatible to run

#include <iostream>
using namespace std;
int main()
{
    int n, max_1, max_2, max_3;
    cout << "Enter the size of an array : ";
    cin >> n;

    if (n >= 3)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] > arr[1])
        {
            if (arr[0] > arr[2])
            {
                max_1 = arr[0];
                max_2 = arr[2];
                max_3 = arr[1];
            }
            else
            {
                max_1 = arr[2];
                max_2 = arr[0];
                max_3 = arr[1];
            }
        }
        else
        {
            if (arr[0] > arr[2])
            {
                max_1 = arr[1];
                max_2 = arr[0];
                max_3 = arr[2];
            }
            else
            {
                max_1 = arr[2];
                max_2 = arr[1];
                max_3 = arr[0];
            }
        }

        for (int i = 3; i < n; i++)
        {
            if (arr[i] > max_1)
            {
                max_3 = max_2;
                max_2 = max_1;
                max_1 = arr[i];
            }
            else if (arr[i] > max_2)
            {
                max_3 = max_2;
                max_2 = arr[i];
            }
            else if (arr[i] > max_3)
            {
                max_3 = arr[i];
            }
        }

        cout << "The Third Max element in an array is : " << max_3;
    }
    else
    {
        cout << "Array do not contain sufficient elements..";
    }

    return 0;
}