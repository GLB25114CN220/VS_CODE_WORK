#include <iostream>
using namespace std;
void printeven(int start, int end)
{
    for (int i = start; i < end; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int a, b;
    cout << "Enter the starting number : ";
    cin >> a;
    cout << "Enter the ending number : ";
    cin >> b;

    cout << "All the even numbers between " << a << " and " << b << " are :--"<<endl;
    printeven(a, b);
    return 0;
}