#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n, t;
    // cout << "n---> ";
    // cin >> n;
    // cout << "t--> ";
    // cin >> t;

    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // int st = *lower_bound(v.begin(), v.end(), t);
    // int st = lower_bound(v.begin(), v.end(), t) - v.begin();
    // int st2 = upper_bound(v.begin(),v.end(),t) - v.begin();
    // never access the indexing as st is only the iterator itself .....

    // auto datatype --> it tells the compiler jonsa or jisprakaar ka number aap use kr rahe ho uske basis pe u can assign the datatype.....
    // auto x = 45;
    // auto y = 7.5;
    // auto c = 23.333333;
    // auto v = 33LL;
    // cout << x << endl;
    // cout << y << endl;
    // cout << c << endl;
    // cout << v << endl;
    // cout << typeid(x).name() << endl;
    // cout << typeid(y).name() << endl;
    // cout << typeid(c).name() << endl;
    // cout << typeid(v).name() << endl;
    // cout << st << endl;
    // cout << st2;

    int vector<int> v = {1,2,3,45,5};
    int st = count(v.begin() , v,end());
    cout << st;

    return 0;
}