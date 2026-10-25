#include <bits/stdc++.h>
using namespace std;
void stairs(int n)
{
    if (n == 0)
        return;
    stairs(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    stairs(n);
}