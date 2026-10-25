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

    int store[n];
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int max_elem = INT_MIN;
        for (int j = 0; j < m; j++)
        {
            if (max_elem < arr[i][j])
            {
                max_elem = arr[i][j];
            }
        }
        store[i] = max_elem;
    }

    int min = store[0];
    for(int i=1;i<n;i++)
    {
        if(min > store[i])
        {
            min = store[i];
        }
    }

    cout<<min;
}