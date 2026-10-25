#include <bits/stdc++.h>
using namespace std;
void sum(int x, int n)
{
    if (x > n)
        return;
    cout << x << " ";
    sum(x+1, n);
}
int main()
{
    int n;
    cin >> n;
    sum(1 , n);
    return 0;
}