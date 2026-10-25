#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter the size of an array : ";
    cin >> n;
    cout << "Enter how many right shifts do u want : ";
    cin >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m = 0;
    while (m != k)
    {
        int temp = 0;
        for (int i = n - 1; i > 0; i--)
        {
            temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
        m++;
    }
    // now printing the actual right shifted array :--
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}