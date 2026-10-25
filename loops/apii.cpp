#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int d = 3;
    int a = 2;
    for (int i = a; i <= (a + ((n - 1) * d)); i += 3)
    {
        cout << i << " ";
    }
    return 0;
}