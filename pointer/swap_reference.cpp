#include <iostream>
using namespace std;
void fun(int *p1, int *p2)
{
    cout << "LD--> " << *p1 << endl;
    cout << "FD--> " << *p2 << endl;
}

int main()
{
    int n;
    cout << "n--> ";
    cin >> n;

    int mb = n;

    int ld, fd;
    while (mb != 0)
    {
        if (mb == n)
        {
            ld = mb % 10;
        }
        else
        {
            fd = mb % 10;
        }
        mb = mb / 10;
    }
    fun(&ld, &fd);

    return 0;
}