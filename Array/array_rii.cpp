#include <iostream>
using namespace std;
void change(int arr[], int a, int b)
{
    while (a != b)
    {
        swap(arr[a], arr[b]);
        a++;
        b--;
    }
}
int main()
{
    int n, k;
    cout << "Enter size of an array : ";
    cin >> n;
    cout << "How much right rotation : ";
    cin >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    change(arr, 0, n - 1);
    change(arr, 0, k - 1);
    change(arr, n - k - 1, n - 1);

    // now printing the right rotated array:--

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}