#include <bits/stdc++.h>
using namespace std;
void check(vector<int> &arr1, vector<int> &arr2, vector<int> &arr)
{
    int i = 0, j = 0, k = 0;
    int n = arr.size();
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] > arr2[j])
        {
            arr[k++] = arr2[j++];
        }
        else
        {
            arr[k++] = arr1[i++];
        }
    }

    if (i >= arr1.size())
    {
        for (int p = j; p < arr2.size(); p++)
        {
            arr[k++] = arr2[p];
        }
    }

    else if (j >= arr2.size())
    {
        for (int p = i; p < arr1.size(); p++)
        {
            arr[k++] = arr1[p];
        }
    }
}
int main()
{
    int n1, n2;
    cout << "Enter the size of array 1 : ";
    cin >> n1;
    cout << "Enter the size of array 2 : ";
    cin >> n2;

    cout << "\n\nEnter the elements inside array 1 :--\n";
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "\n\nEnter the elements inside array 2 :--\n";
    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int n = n1 + n2;
    vector<int> arr(n);
    check(arr1, arr2, arr);

    cout << "\n\nNow printing the elements present inside the final array :--\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}