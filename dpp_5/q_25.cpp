#include <iostream>
using namespace std;
int reverseNumber(int num)
{
    int r = 0, ld = 0;
    while (num != 0)
    {
        ld = num % 10;
        r = ld + (10 * r);
        num /= 10;
    }
    return r;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout<<reverseNumber(n);
    return 0;
}