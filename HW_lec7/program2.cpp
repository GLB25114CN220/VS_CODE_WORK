#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++) // also i*i<=n--> condition
    // sqrt is added in order to decrease time complexity

    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (n == 1)
    {
        cout << "Neither prime nor composite";
    }
    else if (flag == false)
    {
        cout << "Composite number";
    }
    else
    {
        cout << "Prime number";
    }
    return 0;
}