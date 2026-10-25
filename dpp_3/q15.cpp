#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int product = 1, ld;
    while (n != 0)
    {
        ld = n % 10;
        product = product * ld;
        n = n / 10;
    }
    cout << "The product of all the digits is : " << product;
    return 0;
}