#include <iostream>
using namespace std;
int main()
{
    float n;
    cout << "Enter the number : ";
    cin >> n;

    int INT = (int)n;
    if (n == INT)
    {
        cout<<"The given number is an integer";
    }
    else
    {
        cout<<"The given number is not an integer";
    }
    return 0;
}