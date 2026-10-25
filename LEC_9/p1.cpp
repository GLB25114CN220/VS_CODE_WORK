#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int count = 0;
    if (n == 0)
    {
        count = 1;
    }
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Total digits are " << count;
    return 0;
}