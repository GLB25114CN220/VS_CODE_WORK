#include <iostream>
#include <vector>
using namespace std;
void spiral(vector<vector<int>> &arr)
{
    int n = arr.size();    // this will give number of rows
    int m = arr[0].size(); // this will give number of columns

    int st = 0, store_row, store_col, row = 0, col = 0;
    for (int i = 0, j = m - 1; i <= j; i++, j--)
    {
        store_row = i, store_col = j;
        
        if(row == store_row && col == store_col)
        {
            cout<<arr[row][col];
        }

        while (col < store_col)
        {
            cout << arr[row][col] << " ";
            col++;
        }
        while (row < store_col)
        {
            cout << arr[row][col] << " ";
            row++;
        }
        while (col > store_row)
        {
            cout << arr[row][col] << " ";
            col--;
        }
        while (row > store_row)
        {
            cout << arr[row][col] << " ";
            row--;
        }
        row++;
        col++;
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