#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int mag;
    if (n < 0)
    {
        mag = -1 * n;
    }
    else
    {
        mag = n;
    }

    if (mag < 69)
    {
        cout << "The magnitude of " << mag << " is smaller than 69";
    }
    else if (mag > 69)
    {
        cout << "The magnitude of " << mag << " is greater than 69";
    }
    else
    {
        cout << "The magnitude of " << mag << " is equal to 69";
    }
    return 0;
}