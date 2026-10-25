#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if (n < 0)
    {
        n *= -1;
    }
    cout << "The absolute value of provided integer is : " << n << endl;
    return 0;
}