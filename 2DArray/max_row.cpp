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
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < m; j++)
        {
            sum[i] += arr[i][j];
        }
    }

    // now finding the max element in sum array :--

    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (sum[max] < sum[i])
        {
            max = i;
        }
    }

    cout << "The row containing the max sum is : " << max;
    return 0;
}