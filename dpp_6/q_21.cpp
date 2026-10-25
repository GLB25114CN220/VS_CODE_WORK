#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    // implementing the condition :--
    for (int i = 0; i < n; i++)
    {
        if ((arr[i + 1] < arr[i]) || (arr[i + 1] == arr[i]))
        {
            count++;
        }
    }

    if(count == n-1)
    {
        cout<<"True";
    }

    else
    {
        cout<<"False";
    }
}