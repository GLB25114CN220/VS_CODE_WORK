#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of string arr : ";
    cin >> n;

    // cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, arr[i]);
    }
    cout << arr[1] << endl;
    return 0;
}