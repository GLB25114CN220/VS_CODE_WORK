#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int st = n;

    int ld, reverse = 0;
    while (n != 0)
    {
        ld = n % 10;
        reverse = ld + (10 * reverse);
        n = n / 10;
    }
    if (st == reverse)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not A Palindrome Number";
    }
    return 0;
}