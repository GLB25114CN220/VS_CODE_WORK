#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, m;
    cout << "n--> ";
    cin >> n;
    cout << "m--> ";
    cin >> m;

    int st[m];
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    for (int j = 0; j < m; j++)
    {
        int min_elem = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (min_elem > arr[i][j])
            {
                min_elem = arr[i][j];
            }
        }

        st[j] = min_elem;
    }

    int max = st[0];
    for (int j = 1; j < m; j++)
    {
        if (max < st[j])
        {
            max = st[j];
        }
    }

    cout << max;
    return 0;
}