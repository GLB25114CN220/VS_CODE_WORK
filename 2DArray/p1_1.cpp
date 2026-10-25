#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the size of array 1 : ";
    cin >> n;
    cout << "Enter the size of array 2 : ";
    cin >> m;

    int size = n + m;
    int a[n], b[m], c[size];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = n - 1;
    int j = m - 1;
    int k = size - 1;
    while (i >= 0 && j >= 0)
    {
        if (a[i] > b[j])
        {
            c[k--] = a[i--];
        }
        else
        {
            c[k--] = b[j--];
        }
    }
    while (i >= 0)
    {
        c[k--] = a[i--];
    }
    while (j >= 0)
    {
        c[k--] = b[j--];
    }

    for (int i = 0; i < size; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}