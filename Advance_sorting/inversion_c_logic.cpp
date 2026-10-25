#include <bits/stdc++.h>
using namespace std;
int count;
void merge(vector<int> &v1, vector<int> &v2, vector<int> &v)
{
    int i = 0, j = 0, k = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] > v2[j])
        {
            count += (v1.size() - i);
            v[k++] = v2[j++];
        }
        else
        {
            v[k++] = v1[i++];
        }
    }
    if (i >= v1.size())
    {
        for (int p = j; p < v2.size(); p++)
        {
            v[k++] = v2[p];
        }
    }
    else
    {
        for (int p = i; p < v1.size(); p++)
        {
            v[k++] = v1[p];
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
    merge(v1, v2, v);
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    merge_sort(v);
    cout << count;
    return 0;
}