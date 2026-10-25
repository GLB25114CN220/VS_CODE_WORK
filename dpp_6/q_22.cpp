#include <iostream>
using namespace std;
int main()
{
    int n, T;
    cout << "n--> ";
    cin >> n;
    cout << "Targeted elem : ";
    cin >> T;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < T)
        {
            count++;
        }
    }

    cout << count;

    cout<<endl;
    // now printing the elements :--
    for(int i=0;i<n;i++)
    {
        if (arr[i] < T)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}