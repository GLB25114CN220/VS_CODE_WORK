#include <bits/stdc++.h>
using namespace std;
void rec_arr(vector<int> &arr, int index)
{
    if(index == arr.size()) return;
    rec_arr(arr, index + 1);
    cout << arr[index] << endl;
}
int main()
{
    vector<int> arr = {12, 23, 3, 4, 456, 789};
    rec_arr(arr, 0);
    return 0;
}