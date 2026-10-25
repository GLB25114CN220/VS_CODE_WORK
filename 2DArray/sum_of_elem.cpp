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

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }

    cout<<"The sum of elem is : "<<sum;
    return 0;
}