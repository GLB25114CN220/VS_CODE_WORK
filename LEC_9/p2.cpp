#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int ld, sum = 0;
    while (n != 0)
    {
        ld = n % 10;
        sum = sum + ld;
        n /= 10;
    }
    cout << "SUM--> " << sum;
    return 0;
}