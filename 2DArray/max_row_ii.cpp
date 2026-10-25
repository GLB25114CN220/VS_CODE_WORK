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

    int max_row, max_sum = INT_MIN;
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
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max_sum)
        {
            max_sum = sum;
            max_row = i;
        }
    }

    cout << "The row with max sum is : " << max_row;
    return 0;
}