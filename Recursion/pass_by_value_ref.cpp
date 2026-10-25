#include <bits/stdc++.h>
using namespace std;
int array_n(int arr[])
{
    arr[3] = 24;
}
int main()
{
    int arr[] = {1, 2, 3, 5, 7};
    array_n(arr);
    cout << arr[3];
    return 0;
}