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

    // now finding the repeating element in an array :--

    int s[1];
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                if (count == 1)
                {
                    s[0] = i;
                    break;
                }
            }
        }
    }

    int st = s[0];
    cout << arr[st];
    return 0;
}