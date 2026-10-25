#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if (n % 5 == 0)
    {
        cout << "DIVISIBLE BY 5";
    }
    else
    {
        cout << "NOT DIVISIBLE BY 5";
    }
    return 0;
}