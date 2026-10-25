#include <iostream>
using namespace std;
int main()
{
    int num = 65;
    int st;
    for (int i = 1; i <= 26; i++)
    {
        st = num + i - 1;
        cout << (char)st <<endl;
    }
    return 0;
}