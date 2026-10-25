// doing the question by vectors:--

#include <iostream>
#include <vector>
using namespace std;
void rotate_90(vector<vector<int>> &arr)
{
    int n = arr.size();

    // Finding out the transpose matrix:--
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Now applying the concept:--
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        for (int k = 0; k < n; k++)
        {
            swap(arr[i][k], arr[j][k]);
        }
    }

    cout<<"Printing the rotating array:--\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    cout<<"Array:--\n";
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    rotate_90(v);
    return 0;
}