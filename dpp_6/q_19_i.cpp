// -->Time complexity = O(n^2);
// -->which is not a suitable solution

#include <iostream>
using namespace std;
int main()
{
    int n, max_1, max_2, max_3;
    cout << "n--> ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>"%d", &arr[i];
    }

    // Doing Sorting :--

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"The third max el : "<<arr[2];
    return 0;
}