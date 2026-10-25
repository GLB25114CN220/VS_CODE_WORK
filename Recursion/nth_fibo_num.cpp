#include <bits/stdc++.h>
using namespace std;
int n;
int fibo(int a, int b, int n, int c)
{
    if(c==n+1) return a;
    return fibo(a+b , a , n , c+1);
}
int main()
{
    cout << "Enter the number : ";
    cin >> n;

    cout << fibo(0, 1, n,1);
    return 0;
} 