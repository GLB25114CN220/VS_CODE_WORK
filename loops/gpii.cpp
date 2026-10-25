#include <iostream>
using namespace std;
int power(int a)
{
    int num = 2;
    int st = 1;
    for(int i=1;i<=a;i++)
    {
        st *= num;  
    }
    return st;
}
int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int r = 2;
    for (int i = 1; i < power(n); i *= 2)
    {
        cout << i << " ";
    }
    return 0;
}