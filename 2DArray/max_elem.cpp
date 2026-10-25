#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "n--> ";
    cin >> n;
    cout << "m--> ";
    cin >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout << "the max element is : " << max;
    return 0;
}