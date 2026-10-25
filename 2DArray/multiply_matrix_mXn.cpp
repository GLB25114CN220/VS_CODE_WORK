#include <iostream>
#include <vector>
using namespace std;
void matrix_multiplication(vector<vector<int>> &m1, vector<vector<int>> &m2)
{
    int n = m1.size();
    int m = m1[0].size();
    int p = m2.size();
    int q = m2[0].size();

    vector<vector<int>> result_matrix(n, vector<int>(q, 0));
    cout << endl
         << "Matrix after multiplication :--" << endl;

    if (m == p)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    result_matrix[i][j] += (m1[i][k] * m2[k][j]);    
                }
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << result_matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Matrix multiplication not possible";
    }
}
int main()
{
    int n, m, p, q;
    // matrix 1--> n X m;
    // matrix 2--> p X q;

    cout << "Enter the number of rows of matrix 1 : ";
    cin >> n;
    cout << "Enter the number of columns of matrix 1 : ";
    cin >> m;
    cout << "Enter the number of rows of matrix 2 : ";
    cin >> p;
    cout << "Enter the number of columns of matrix 2 : ";
    cin >> q;

    vector<vector<int>> matrix_1(n, vector<int>(m));
    vector<vector<int>> matrix_2(p, vector<int>(q));

    cout << endl
         << "Scanning matrix 1 :- " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix_1[i][j];
        }
    }

    cout << endl
         << "Scanning matrix 2 :- " << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> matrix_2[i][j];
        }
    }

    matrix_multiplication(matrix_1, matrix_2);
    return 0;
}