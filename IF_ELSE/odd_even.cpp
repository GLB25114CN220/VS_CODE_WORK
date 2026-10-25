#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout<<"EVEN NUMBER";
    }
    else
    {
        cout<<"ODD NUMBER";
    }
    return 0;
}