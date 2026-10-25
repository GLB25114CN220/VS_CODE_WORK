#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int r = n - 293;
    int reverse = 0, ld;

    while (r != 0)
    {
        ld = r % 10;
        reverse = ld + (10 * reverse);
        r = r / 10;
    }
    cout << endl;
    cout << "The reverse of the resultant value is " << reverse;
    return 0;
}