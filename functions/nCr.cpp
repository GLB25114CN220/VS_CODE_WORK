#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact; 
}

int result(int a, int b)
{
    return (fact(a) / (fact(b) * fact(a - b)));
}
int main()
{
    int n, r;
    cout << "n--> ";
    cin >> n;
    cout << "r--> ";
    cin >> r;

    cout << "nCr --> " << result(n, r) << endl;
    return 0;
}