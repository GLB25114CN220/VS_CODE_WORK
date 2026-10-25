#include <iostream>
using namespace std;
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

int get_permutation(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

int main()
{
    int n, r;
    cout << "n--> ";
    cin >> n;
    cout << "r--> ";
    cin >> r;

    cout << "nPr : " << get_permutation(n, r);
    return 0;
}