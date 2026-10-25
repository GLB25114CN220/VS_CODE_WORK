#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    if (n < -999 && n > -10000)
    {
        cout << "negative 4 digit number";
    }
    else
    {
        cout << "not a negative 4 digit number";
    }
    return 0;
}