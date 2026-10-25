#include <iostream>
#include <vector>
using namespace std;
void bubble(vector<int> &arr)
{
    int n = arr.size();
    int pass = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int swaps = 0;
        for (int j = 0; j < n - pass; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
        pass++;
        if (swaps == 0)
        {
            break;
        }
    }
    cout << ("\n\n");
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble(arr);
}