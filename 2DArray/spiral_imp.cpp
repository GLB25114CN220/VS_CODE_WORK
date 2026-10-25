#include <iostream>
#include <vector>
using namespace std;
void spiral(vector<vector<int>> &arr)
{
    int n = arr.size();    // this will give number of rows
    int m = arr[0].size(); // this will give number of columns

    int min_c = 0, min_r = 0, max_c = m - 1, max_r = n - 1;
    while (min_r <= max_r && min_c <= max_c)
    {
        for (int j = min_c; j <= max_c; j++)
        {
            cout << arr[min_r][j];
        }
        min_r++;
        if (min_c > max_c || min_r > max_r)
        {
            break;
        }

        for (int i = min_r; i <= max_r; i++)
        {
            cout << arr[i][max_c];
        }
        max_c--;
        if (min_c > max_c || min_r > max_r)
        {
            break;
        }

        for (int j = max_c; j >= min_c; j--)
        {
            cout << arr[max_r][j];
        }
        max_r--;
        if (min_c > max_c || min_r > max_r)
        {
            break;
        }
        
        for (int i = max_r; i >= min_r; i--)
        {
            cout << arr[i][min_c];
        }
        min_c++;
    }
}
int main()
{
    int n, m;
    cout << "Enter the number of rows of matrix : ";
    cin >> n;
    cout << "Enter the number of columns of matrix : ";
    cin >> m;

    // Taking the input of matrix :--
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    // Now passing the matrix to function :--
    spiral(v);
    return 0;
}