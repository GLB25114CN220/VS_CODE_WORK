// --> odd and multiple of 3 so do it by lcm

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 3; i < n; i += 6)
    {
        cout << i << " ";
    }
    return 0;
}