#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
    for (int elm : v)
    {
        cout << elm << " ";
    }
}

void merge(vector<int> &arr1, vector<int> &arr2, vector<int> &arr)
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

void merge_sort(vector<int> &v)
{
    int n = v.size();
    if (n == 1)
        return;
    int n1 = n / 2;
    int n2 = n - n1;

    vector<int> v1(n1);
    vector<int> v2(n2);

    int k = 0;
    for (int i = 0; i < n1; i++)
    {
        v1[i] = v[k];
        k++;
    }

    for (int j = 0; j < n2; j++)
    {
        v2[j] = v[k];
        k++;
    }

    merge_sort(v1);
    merge_sort(v2);
    merge(v1,v2,v);
    delete(&v1);
    delete(&v2);
}

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    merge_sort(v);
    print(v);
    return 0;
}