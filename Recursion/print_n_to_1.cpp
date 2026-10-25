#include <bits/stdc++.h>
using namespace std;
void revers(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    revers(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    revers(n);
}