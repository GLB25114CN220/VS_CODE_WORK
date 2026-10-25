#include <iostream>
using namespace std;
int factorial(int fact)
{
    int p = 1;
    for (int i = 1; i <= fact; i++)
    {
        p = p * i;
    }
    return p;
}
int nCr(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<nCr(i , j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}