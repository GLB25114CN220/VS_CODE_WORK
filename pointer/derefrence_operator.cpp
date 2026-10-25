#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int *ptr = &x;
    *ptr = 40;
    cout<<x<<endl;
    return 0;
}