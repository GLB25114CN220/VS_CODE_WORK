#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter number 1 : ";
    cin >> n1;
    cout << "Enter number 2 : ";
    cin >> n2;

    cout << endl;
    cout << "The even numbers are :--" << endl;

    for (int i = n1 + 1; i < n2; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}