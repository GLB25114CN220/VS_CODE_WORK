#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer : ";
    cin >> n;

    int store;
    for (int i = n + 1; i < 2 * n; i++)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (n > 500)
        {
            store = 0;
        }
        else if (flag == true)
        {
            store = 1;
            cout << "The prime number after " << n << " is " << i;
            break;
        }
    }
    if (store == 0)
    {
        cout << "Invalid Input";
    }
    return 0;
}