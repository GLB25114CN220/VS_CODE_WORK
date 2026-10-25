#include <iostream>
using namespace std;
int max(int a, int b, int c)
{
    //  now finding the max out of three digits :--

    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int main()
{
    int num_1, num_2, num_3;
    cout << "Enter the number 1 : ";
    cin >> num_1;
    cout << "Enter the number 2 : ";
    cin >> num_2;
    cout << "Enter the number 3 : ";
    cin >> num_3;

    int result = max(num_1, num_2, num_3);
    cout << "The max out of three digits is : " << result;
    return 0;
}