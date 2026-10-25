#include <iostream>
#include<vector>
using namespace std;
int change(vector<int>& v)
{
    v[3] = 99;
}
int main()
{
    vector<int> v;
    v = {12, 21, 34, 49, 55};
    change(v);
    cout << v[3];
    return 0;
}