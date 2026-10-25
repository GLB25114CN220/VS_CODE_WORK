#include <bits/stdc++.h>
using namespace std;
int n;
void sum(int x)
{
    if (x > n)
        return;
    cout << x << " ";
    sum(x+1);
}
int main()
{
    cin >> n;
    sum(1);
    return 0;
}