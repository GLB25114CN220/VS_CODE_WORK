#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int r = 0, ld, sum = n;
    while (n != 0)
    {
        ld = n % 10;
        r = ld + (10 * r);
        n = n / 10;
    }
    sum = sum + r;
    
    cout << "Reverse num --> " << r << endl;
    cout << "SUM--> " << sum << endl;
    return 0;
}