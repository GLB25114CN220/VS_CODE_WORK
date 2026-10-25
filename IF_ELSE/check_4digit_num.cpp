#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    if (num > 999 && num < 10000)  // (num>999 and num<10000)  this can also run in c++ only 
    {
        cout << "4 digit number";
    }
    else
    {
        cout << "not a 4 digit number";
    }
    return 0;
}