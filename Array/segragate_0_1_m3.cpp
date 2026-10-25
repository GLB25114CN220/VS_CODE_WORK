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
        scanf("%d", &arr[i]);
    }

    int a = 0;
    int b = n - 1;
    while(a<b)
    {
        if(arr[a] == 0)
        {
            if(arr[b] == 0)
            {
                a++;
            }
            else
            {
                b--;
            }
        }
        else
        {
            if(arr[b] == 1)
            {
                b--;
            }
            else
            {
                swap(arr[a] , arr[b]);
                a++;
                b--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}