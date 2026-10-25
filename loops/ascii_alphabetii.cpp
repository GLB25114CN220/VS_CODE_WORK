#include <iostream>
using namespace std;
int main()
{
    int num = 65;
    for (int i = 1; i <= 26; i++)
    {
        cout << (char)num << endl;
        num++;
    }
    return 0;
}