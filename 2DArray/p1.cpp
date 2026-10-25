#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter size of array 1 : ";
    cin >> n;
    cout << "Enter size of array 2 : ";
    cin >> m;

    int size = n + m;

    int a[n], b[m], c[size];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0, st = 0;
    while (i < n && j < m)
    {
        if ((a[i] < b[j]))
        {
            c[st++] = a[i++];
        }
        else if ((a[i] > b[j]))
        {
            c[st++] = b[j++];
        }
    }

    while(i<n)
    {
        c[st++] = a[i++];
    }
    while(j<m)
    {
        c[st++] = b[j++];
    }

    for (int i = 0; i < size; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}