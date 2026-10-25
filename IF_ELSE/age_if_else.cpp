#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age of person : " << endl;
    cin >> age;

    if (age <= 18)
    {
        cout << "CAN DRIVE";
    }
    else
    {
        cout << "CAN NOT DRIVE";
    }
    return 0;
}