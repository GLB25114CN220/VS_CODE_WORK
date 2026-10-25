#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "n--> ";
    cin >> n;
    cout << "m--> ";
    cin >> m;

    cout << "Taking the input of matrix :--\n";
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout<<endl<<"Real matrix :--"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "[" << arr[i][j] << "]" << " ";
        }
        cout << endl;
    }
    
    cout<<endl<<"Printing the transpose of a matrix :--"<<endl;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "[" << arr[i][j] << "]" << " ";
        }
        cout << endl;
    }

    return 0;
}